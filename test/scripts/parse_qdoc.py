#!/usr/bin/env python3
"""
Parse QDoc files and extract content using tree-sitter.

This script demonstrates how to:
1. Parse QDoc comment blocks
2. Extract commands and their arguments
3. Extract inline markup
4. Retrieve actual text content

Usage:
    python parse_qdoc.py <qdoc-file>

Prerequisites:
    pip install tree-sitter

Note: You need to build the language library first:
    python -c "from tree_sitter import Language; Language.build_library('build/qdoc.so', ['.'])"
"""

import re
import sys
import os

try:
    from tree_sitter import Language, Parser
    from tree_sitter_qdoc import language as qdoc_language
except ImportError as e:
    print(f"Error: missing dependency — {e}")
    print("Install with: pipenv run pip install -e /path/to/qdoc-parser/")
    sys.exit(1)


def build_parser():
    """Build and return a QDoc parser."""
    lang = Language(qdoc_language())
    return Parser(lang)


def get_node_text(node, source_code):
    """Extract text content from a node."""
    return source_code[node.start_byte:node.end_byte].decode('utf8')


def split_sentences(text):
    """Split a prose string into individual sentences.

    Paragraph-splits first so that single-line command arguments (e.g. a
    \\title value sitting before a blank line) are separated from body prose
    before sentence splitting. Only fragments ending with sentence-final
    punctuation are returned.
    """
    sentences = []
    for para in re.split(r'\n{2,}', text):
        para = ' '.join(para.split())
        if not para:
            continue
        parts = re.split(r'(?<=[.!?])\s+(?=[A-Z"])', para)
        sentences.extend(s.strip() for s in parts if s.strip())
    return [s for s in sentences if s and s[-1] in '.!?']


# Commands whose immediately-following text node is a structured argument
# (identifier, signature, reference list) rather than prose.
_SKIP_AFTER = {
    'class', 'enum', 'fn', 'property', 'variable', 'typedef', 'typealias',
    'namespace', 'module', 'group', 'page', 'example', 'macro', 'headerfile',
    'qmltype', 'qmlproperty', 'qmlmethod', 'qmlsignal', 'qmlenum',
    'qmlmodule', 'qmlattachedproperty', 'qmlattachedsignal',
    'sa', 'see',
}


def _strip_braces(t):
    """Strip surrounding braces and whitespace from a token string."""
    t = t.strip()
    if t.startswith('{') and t.endswith('}'):
        t = t[1:-1]
    return t


def extract_sentences(comment_node, source_code):
    """Reconstruct prose from a comment block and split into sentences.

    Walks markup siblings in document order. Text nodes that immediately
    follow a topic or non-prose command are skipped (they hold the command
    argument, not prose). Inline command text is substituted inline with
    braces stripped. Block commands (list, table, legalese, quotation) are
    recursed into; raw blocks are skipped entirely.
    """
    parts = []

    def walk_markups(markups, skip_next_text=False):
        for markup in markups:
            for node in markup.children:
                if node.type == 'command':
                    cmd_name = next(
                        (get_node_text(c, source_code)
                         for c in node.children if c.type == 'command_name'),
                        ''
                    )
                    skip_next_text = cmd_name in _SKIP_AFTER
                    # cell_span ({rows,cols}) is a structured argument, not prose
                    span_node = node.child_by_field_name('span')
                    if span_node:
                        skip_next_text = False  # span is self-contained; prose follows
                elif node.type == 'text':
                    if not skip_next_text:
                        parts.append(get_node_text(node, source_code))
                    skip_next_text = False
                elif node.type == 'inline_command':
                    skip_next_text = False
                    for ic in node.children:
                        if ic.type == 'inline_text':
                            parts.append(_strip_braces(get_node_text(ic, source_code)))
                elif node.type == 'image_command':
                    # \image filename [alt text] — skip filename, include alt text
                    skip_next_text = False
                    content_node = node.child_by_field_name('content')
                    if content_node:
                        content = get_node_text(content_node, source_code)
                        space = content.find(' ')
                        if space >= 0:
                            parts.append(' ' + _strip_braces(content[space + 1:]))
                elif node.type == 'inlineimage_command':
                    # \inlineimage filename [{alt text}] — skip filename, include alt
                    skip_next_text = False
                    alt_node = node.child_by_field_name('alt')
                    if alt_node:
                        parts.append(_strip_braces(get_node_text(alt_node, source_code)))
                elif node.type == 'block_command':
                    skip_next_text = False
                    for block in node.children:
                        if block.type == 'raw_block':
                            pass  # raw HTML — skip entirely
                        else:
                            # list_block, table_block, legalese_block, quotation_block
                            # contain markup children; block_argument is structured, skip it
                            inner = [c for c in block.children if c.type == 'markup']
                            walk_markups(inner)

    for child in comment_node.children:
        if child.type != 'block_comment':
            continue
        walk_markups([c for c in child.children if c.type == 'markup'])

    return split_sentences(''.join(parts))


def extract_comment_block(comment_node, source_code):
    """Extract structured data from a comment block."""
    comment_data = {
        'type': 'comment',
        'location': {
            'start_line': comment_node.start_point[0] + 1,
            'start_col': comment_node.start_point[1],
            'end_line': comment_node.end_point[0] + 1,
            'end_col': comment_node.end_point[1]
        },
        'topic_commands': [],
        'content_commands': [],
        'inline_commands': [],
        'text_fragments': [],
        'sentences': extract_sentences(comment_node, source_code),
        'full_text': get_node_text(comment_node, source_code)
    }

    def traverse_markup(node):
        """Recursively traverse markup nodes."""
        if node.type == 'command':
            cmd_data = {'type': 'command'}

            for child in node.children:
                if child.type == 'command_name':
                    cmd_data['name'] = get_node_text(child, source_code)
                elif child.type == 'command_argument':
                    cmd_data['argument'] = get_node_text(child, source_code)
                elif child.type == 'description':
                    cmd_data['description'] = get_node_text(child, source_code)
                elif child.type == 'cell_span':
                    cmd_data['span'] = _strip_braces(get_node_text(child, source_code))

            # Categorize commands
            topic_commands = [
                'class', 'enum', 'fn', 'property', 'variable', 'typedef',
                'qmltype', 'qmlproperty', 'qmlmethod', 'page', 'namespace',
                'module', 'group', 'example'
            ]

            if cmd_data.get('name') in topic_commands:
                comment_data['topic_commands'].append(cmd_data)
            else:
                comment_data['content_commands'].append(cmd_data)

        elif node.type == 'image_command':
            content_node = node.child_by_field_name('content')
            content = get_node_text(content_node, source_code) if content_node else ''
            space = content.find(' ')
            cmd_data = {'type': 'image_command', 'name': 'image', 'argument': content[:space] if space >= 0 else content}
            if space >= 0:
                alt = content[space + 1:].strip()
                if alt.startswith('{') and alt.endswith('}'):
                    alt = alt[1:-1]
                cmd_data['alt'] = alt
            comment_data['content_commands'].append(cmd_data)
            return

        elif node.type == 'inlineimage_command':
            filename_node = node.child_by_field_name('filename')
            alt_node = node.child_by_field_name('alt')
            inline_data = {
                'type': 'inlineimage_command',
                'name': 'inlineimage',
                'text': get_node_text(filename_node, source_code) if filename_node else '',
            }
            if alt_node:
                alt = get_node_text(alt_node, source_code).strip()
                if alt.startswith('{') and alt.endswith('}'):
                    alt = alt[1:-1]
                inline_data['alt'] = alt
            comment_data['inline_commands'].append(inline_data)
            return

        elif node.type == 'block_command':
            # Record the block type (e.g. list_block, raw_block) as a content command
            for block in node.children:
                block_type = block.type  # e.g. 'list_block', 'raw_block'
                cmd_name = block_type.replace('_block', '')
                cmd_data = {'type': 'block_command', 'name': cmd_name}
                # Extract optional block_argument (list type, table width, raw format)
                arg_node = block.child_by_field_name('arg')
                if arg_node:
                    cmd_data['argument'] = get_node_text(arg_node, source_code)
                comment_data['content_commands'].append(cmd_data)
            # Recurse into children to pick up sub-commands and text
            for child in node.children:
                traverse_markup(child)
            return

        elif node.type == 'inline_command':
            inline_data = {'type': 'inline_command'}

            for child in node.children:
                if child.type == 'inline_command_name':
                    inline_data['name'] = get_node_text(child, source_code)
                elif child.type == 'inline_text':
                    inline_data['text'] = get_node_text(child, source_code)

            comment_data['inline_commands'].append(inline_data)

        elif node.type == 'text':
            text_content = get_node_text(node, source_code).strip()
            if text_content and text_content not in ['', '\n']:
                comment_data['text_fragments'].append(text_content)

        # Recursively process children
        for child in node.children:
            traverse_markup(child)

    # Start traversal from the block_comment node
    for child in comment_node.children:
        if child.type == 'block_comment':
            for markup in child.children:
                traverse_markup(markup)

    return comment_data


def parse_qdoc_file(filepath):
    """Parse a QDoc file and extract all comment blocks."""
    parser = build_parser()

    # Read the source file
    with open(filepath, 'rb') as f:
        source_code = f.read()

    # Parse the file
    tree = parser.parse(source_code)

    # Extract all comments
    comments = []

    def traverse(node):
        if node.type == 'comment':
            comments.append(extract_comment_block(node, source_code))

        for child in node.children:
            traverse(child)

    traverse(tree.root_node)

    return comments, source_code


def print_comment_summary(comment, index, source_code):
    """Print a formatted summary of a comment block."""
    print(f"\n{'='*70}")
    print(f"COMMENT BLOCK #{index}")
    print(f"{'='*70}")
    print(f"Location: Lines {comment['location']['start_line']}-{comment['location']['end_line']}")

    # Topic commands
    if comment['topic_commands']:
        print(f"\n📌 Topic Commands ({len(comment['topic_commands'])}):")
        for cmd in comment['topic_commands']:
            print(f"   \\{cmd['name']}", end='')
            if cmd.get('argument'):
                print(f" {cmd['argument']}", end='')
            if cmd.get('description'):
                print(f" - {cmd['description'][:60]}...", end='')
            print()

    # Content commands
    if comment['content_commands']:
        print(f"\n📝 Content Commands ({len(comment['content_commands'])}):")
        for cmd in comment['content_commands']:
            print(f"   \\{cmd['name']}", end='')
            if cmd.get('argument'):
                print(f" {cmd['argument']}", end='')
            if cmd.get('span'):
                print(f" (span: {cmd['span']})", end='')
            if cmd.get('alt'):
                print(f" (alt: {cmd['alt'][:50]})", end='')
            if cmd.get('description'):
                desc = cmd['description'].strip()
                if len(desc) > 60:
                    desc = desc[:60] + '...'
                print(f" - {desc}", end='')
            print()

    # Inline commands
    if comment['inline_commands']:
        print(f"\n✏️  Inline Markup ({len(comment['inline_commands'])}):")
        for cmd in comment['inline_commands']:
            text = cmd.get('text', '')[:40]
            alt = f" (alt: {cmd['alt'][:40]})" if cmd.get('alt') else ''
            print(f"   \\{cmd['name']} {text}...{alt}")

    # Sentences
    if comment['sentences']:
        print(f"\n💬 Sentences ({len(comment['sentences'])}):")
        for i, sentence in enumerate(comment['sentences'], 1):
            if len(sentence) > 70:
                sentence = sentence[:70] + '...'
            print(f"   {i}. {sentence}")


def main():
    if len(sys.argv) < 2:
        print("Usage: python parse_qdoc.py <file.qdoc>")
        print("\nExample:")
        print("  python parse_qdoc.py ../samples/sample.qdoc")
        sys.exit(1)

    filepath = sys.argv[1]

    if not os.path.exists(filepath):
        print(f"Error: File not found: {filepath}")
        sys.exit(1)

    print(f"Parsing: {filepath}")
    print(f"{'='*70}")

    try:
        comments, source_code = parse_qdoc_file(filepath)

        print(f"\n✅ Found {len(comments)} comment block(s)\n")

        for i, comment in enumerate(comments, 1):
            print_comment_summary(comment, i, source_code)

        # Print full content option
        if len(comments) > 0:
            print(f"\n\n{'='*70}")
            print("RAW CONTENT OF FIRST COMMENT BLOCK")
            print(f"{'='*70}")
            print(comments[0]['full_text'])

        print(f"\n{'='*70}")
        print(f"✅ Parsing completed successfully!")
        print(f"{'='*70}\n")

    except Exception as e:
        print(f"\n❌ Error parsing file: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)


if __name__ == '__main__':
    main()
