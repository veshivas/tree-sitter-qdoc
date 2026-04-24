# QDoc Content Extraction Scripts

These scripts demonstrate how to extract specific content from QDoc files using the tree-sitter parser. Available in both **Python** and **Go**.

## Python Setup

1. **Install pipenv (if not already installed):**
   ```bash
   pip install pipenv
   ```

2. **Install dependencies:**
   ```bash
   cd test/scripts
   pipenv install
   ```

3. **Install the QDoc parser package:**
   ```bash
   cd test/scripts
   pipenv run pip install -e ../..
   ```

## Go Setup

1. **Ensure Go is installed** (version 1.22 or later)

2. **Build the Go extraction program:**
   ```bash
   cd test/scripts
   go build -o extract_qdoc_go extract_qdoc_content.go
   ```

That's it! Go manages dependencies automatically.

## Usage

### Python Version

```bash
cd test/scripts
pipenv run python extract_qdoc_content.py <file.qdoc>
```

**Example:**
```bash
pipenv run python extract_qdoc_content.py ../samples/sample.qdoc
```

### Go Version

```bash
cd test/scripts
./extract_qdoc_go <file.qdoc>
```

**Example:**
```bash
./extract_qdoc_go ../samples/sample.qdoc
```

Both programs produce the same output format and extract the same information.

## What Gets Extracted

### 1. Topic Commands
Commands that identify what is being documented:
- `\class` - Class/struct documentation
- `\fn` - Function documentation
- `\property` - Property documentation
- `\qmltype` - QML type documentation
- `\page` - Standalone documentation page
- And all other topic commands

**Example output:**
```
📌 TOPIC COMMANDS (What is being documented)
----------------------------------------------------------------------
  Line   2: \class Calculator
  Line  10: \fn int Calculator::add(int a, int b)
  Line  24: \qmltype Button
```

### 2. Brief Descriptions
All `\brief` command descriptions:

**Example output:**
```
📝 BRIEF DESCRIPTIONS
----------------------------------------------------------------------
  Line   3: The Calculator class provides basic arithmetic operations.
  Line  11: Adds two integers together.
```

### 3. Inline Markup Commands
Inline formatting commands like `\a`, `\b`, `\c`, `\e`:

**Example output:**
```
✏️  INLINE MARKUP COMMANDS
----------------------------------------------------------------------
  Line  14: \a 'a and '...
  Line  14: \b 'b arguments to return their sum.'...
  Line   5: \c 'Calculator::add()'...
```

### 4. Command Summary
Count of all commands used in the file.

## How It Works

The script uses tree-sitter to:
1. Parse the QDoc file into an Abstract Syntax Tree (AST)
2. Traverse the AST looking for specific node types
3. Extract text content from matching nodes
4. Categorize and display the results

### Key Functions

- `extract_topic_commands()` - Extracts all topic commands and arguments
- `extract_brief_descriptions()` - Extracts \brief descriptions
- `extract_inline_commands()` - Extracts inline markup
- `extract_all_commands()` - Extracts all block-level commands

## Customization

You can modify `extract_qdoc_content.py` to extract other specific content:

### Example: Extract all \sa (see also) references

```python
def extract_see_also(tree, source_code):
    """Extract all \sa command content."""
    results = []

    def traverse(node):
        if node.type == 'command':
            cmd_name = None
            cmd_desc = None

            for child in node.children:
                if child.type == 'command_name':
                    cmd_name = get_text(child, source_code)
                elif child.type == 'description':
                    cmd_desc = get_text(child, source_code)

            if cmd_name == 'sa' and cmd_desc:
                results.append({
                    'references': cmd_desc.strip(),
                    'line': node.start_point[0] + 1
                })

        for child in node.children:
            traverse(child)

    traverse(tree.root_node)
    return results
```

### Example: Extract specific QML commands

```python
def extract_qml_properties(tree, source_code):
    """Extract all QML property definitions."""
    results = []

    def traverse(node):
        if node.type == 'command':
            cmd_name = None
            cmd_arg = None

            for child in node.children:
                if child.type == 'command_name':
                    cmd_name = get_text(child, source_code)
                elif child.type == 'command_argument':
                    cmd_arg = get_text(child, source_code)

            if cmd_name == 'qmlproperty' and cmd_arg:
                results.append({
                    'property': cmd_arg,
                    'line': node.start_point[0] + 1
                })

        for child in node.children:
            traverse(child)

    traverse(tree.root_node)
    return results
```

## AST Node Types

The QDoc parser generates these node types:

- `source_file` - Root node
- `comment` - A comment block
- `block_comment` - Block comment content
- `markup` - Markup element (command, inline_command, or text)
- `command` - Block-level command (e.g., `\class`, `\brief`)
- `command_name` - Name of the command
- `command_argument` - Argument to the command
- `description` - Description text
- `inline_command` - Inline markup (e.g., `\a`, `\b`, `\c`)
- `inline_command_name` - Name of inline command
- `inline_text` - Text within inline command
- `text` - Plain text content

## Sample Files

Sample QDoc files are in `../samples/`:
- `sample.qdoc` - Comprehensive example with multiple command types
- `test-inline.qdoc` - Example focused on inline commands
