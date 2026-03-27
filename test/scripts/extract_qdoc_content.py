#!/usr/bin/env python3
r"""
Extract specific content from QDoc files using tree-sitter.

In the QDoc AST produced by this parser, the text that follows a block command
(e.g. \brief, \title, \class) is NOT a child of the command node. Instead it
is parsed as a sibling text node under the parent markup node. This script
accounts for that by looking at the next sibling of each command's parent.

Usage:
    python extract_qdoc_content.py <qdoc-file> [--filter cmd1 cmd2 ...]

Examples:
    # Extract everything
    python extract_qdoc_content.py sample.qdoc

    # Extract only \title and \brief commands
    python extract_qdoc_content.py sample.qdoc --filter title brief

    # Extract only inline commands \a and \b
    python extract_qdoc_content.py sample.qdoc --filter a b

Prerequisites:
    pipenv install
"""

import sys
import argparse
from pathlib import Path

try:
    from tree_sitter import Language, Parser
    from tree_sitter_qdoc import language as get_language
except ImportError as e:
    print(f"Error: Required module not found: {e}")
    print("\nSetup instructions:")
    print("  cd test/scripts")
    print("  pipenv install")
    print("  pipenv run pip install -e ../..")
    sys.exit(1)


TOPIC_COMMANDS = {
    'class', 'enum', 'fn', 'property', 'variable', 'typedef', 'typealias',
    'namespace', 'module', 'group', 'page', 'example', 'macro', 'headerfile',
    'externalpage', 'nativetype',
    'qmltype', 'qmlproperty', 'qmlmethod', 'qmlsignal', 'qmlenum',
    'qmlmodule', 'qmlvaluetype', 'qmlattachedproperty', 'qmlattachedsignal',
    'qmlclass', 'qmlsingletontype',
    'cmakepackage', 'cmakecomponent', 'cmaketargetitem',
}

# \brief takes all text until the first blank line as its argument.
BRIEF_COMMANDS = {'brief'}

# Admonition commands (\note, \warning) also take all text until the first
# blank line as their argument.
ADMONITION_COMMANDS = {'note', 'warning'}

# Combined set used by get_following_text to enable multiline collection.
MULTILINE_COMMANDS = BRIEF_COMMANDS | ADMONITION_COMMANDS


def build_parser():
    """Build and return a QDoc parser."""
    QDOC_LANGUAGE = Language(get_language())
    return Parser(QDOC_LANGUAGE)


def get_text(node, source_code):
    """Get text content from a node."""
    return source_code[node.start_byte:node.end_byte].decode('utf8')


def get_following_text(command_node, source_code, cmd_name=''):
    """
    Get the text argument that follows a command.

    For brief and admonition commands (note, warning): walks all sibling
    markup nodes collecting text and inline_text content until the first blank
    line (\n\n) or the next block command, whichever comes first. Whitespace
    is normalised and the result is returned as a single string.

    For all other commands: returns the same-line text only (up to the first
    newline), matching the original behaviour.
    """
    parent = command_node.parent  # "markup" node
    if parent is None:
        return ''

    if cmd_name not in MULTILINE_COMMANDS:
        # Original behaviour: first sibling text node, first line only.
        next_sibling = parent.next_named_sibling
        if next_sibling is None:
            return ''
        for child in next_sibling.children:
            if child.type == 'text':
                text = get_text(child, source_code).lstrip(' \t')
                newline = text.find('\n')
                if newline >= 0:
                    text = text[:newline]
                return text.strip()
        return ''

    # Multiline collection: walk siblings until \n\n or next block command.
    parts = []
    sibling = parent.next_named_sibling
    while sibling is not None:
        stop = False
        for child in sibling.children:
            if child.type == 'text':
                raw = get_text(child, source_code)
                blank = raw.find('\n\n')
                if blank >= 0:
                    parts.append(raw[:blank])
                    stop = True
                    break
                parts.append(raw)
            elif child.type == 'inline_command':
                for ic in child.children:
                    if ic.type == 'inline_text':
                        t = get_text(ic, source_code).strip().strip('{}')
                        parts.append(t)
            elif child.type in ('command', 'block_command'):
                stop = True
                break
        if stop:
            break
        sibling = sibling.next_named_sibling

    return ' '.join(' '.join(parts).split())


def extract_all_command_instances(tree, source_code):
    """Extract all block-level commands with the text that follows them."""
    results = []

    def traverse(node):
        if node.type == 'command':
            cmd_name = None
            for child in node.children:
                if child.type == 'command_name':
                    cmd_name = get_text(child, source_code)
                    break

            if cmd_name:
                text = get_following_text(node, source_code, cmd_name)
                results.append({
                    'command': cmd_name,
                    'text': text,
                    'line': node.start_point[0] + 1,
                })

        for child in node.children:
            traverse(child)

    traverse(tree.root_node)
    return results


def extract_inline_commands(tree, source_code):
    r"""Extract all inline markup commands (e.g., \a, \b, \c)."""
    results = []

    def traverse(node):
        if node.type == 'inline_command':
            cmd_name = None
            cmd_text = None

            for child in node.children:
                if child.type == 'inline_command_name':
                    cmd_name = get_text(child, source_code)
                elif child.type == 'inline_text':
                    cmd_text = get_text(child, source_code).strip()

            if cmd_name:
                results.append({
                    'command': cmd_name,
                    'text': cmd_text or '',
                    'line': node.start_point[0] + 1,
                })

        for child in node.children:
            traverse(child)

    traverse(tree.root_node)
    return results


def filter_commands(items, filter_set):
    """Filter a list of command dicts by command name (None = keep all)."""
    if filter_set is None:
        return items
    return [item for item in items if item['command'] in filter_set]


def main():
    arg_parser = argparse.ArgumentParser(
        description='Extract specific content from QDoc files',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=r'''
Examples:
  %(prog)s sample.qdoc
  %(prog)s sample.qdoc --filter title brief
  %(prog)s sample.qdoc --filter a b
        '''
    )
    arg_parser.add_argument('file', type=str, help='QDoc file to parse')
    arg_parser.add_argument(
        '--filter', '-f',
        nargs='+',
        metavar='CMD',
        help='Extract only the specified commands (e.g., title brief fn)',
    )

    args = arg_parser.parse_args()

    filepath = Path(args.file)
    if not filepath.exists():
        print(f"Error: File not found: {filepath}")
        sys.exit(1)

    filter_set = set(args.filter) if args.filter else None

    ts_parser = build_parser()
    source_code = filepath.read_bytes()
    tree = ts_parser.parse(source_code)

    # Extract all content once
    all_cmds = extract_all_command_instances(tree, source_code)
    all_inlines = extract_inline_commands(tree, source_code)

    # Apply filter at display time
    cmds = filter_commands(all_cmds, filter_set)
    inlines = filter_commands(all_inlines, filter_set)

    # Separate topic commands from others for display
    topics = [c for c in cmds if c['command'] in TOPIC_COMMANDS]
    others = [c for c in cmds if c['command'] not in TOPIC_COMMANDS]

    # Print results
    print(f"\n{'='*70}")
    print(f"QDoc Content Extraction: {filepath.name}")
    if filter_set:
        print(f"Filter: {', '.join(sorted(filter_set))}")
    print(f"{'='*70}\n")

    # Topic commands
    if filter_set is None or topics:
        print("TOPIC COMMANDS")
        print("-" * 70)
        if topics:
            for t in topics:
                print(f"  Line {t['line']:3d}: \\{t['command']:<15} {t['text']}")
        else:
            print("  (none found)")
        print()

    # Other block commands (brief, title, section1, sa, etc.)
    if filter_set is None or others:
        print("OTHER COMMANDS")
        print("-" * 70)
        if others:
            for c in others:
                print(f"  Line {c['line']:3d}: \\{c['command']:<15} {c['text']}")
        else:
            print("  (none found)")
        print()

    # Inline commands
    if filter_set is None or inlines:
        print("INLINE COMMANDS")
        print("-" * 70)
        if inlines:
            for c in inlines:
                print(f"  Line {c['line']:3d}: \\{c['command']:<10} {c['text']}")
        else:
            print("  (none found)")
        print()

    print(f"{'='*70}")
    print(f"Found: {len(cmds)} block command(s), {len(inlines)} inline command(s)")
    print(f"{'='*70}\n")


if __name__ == '__main__':
    main()
