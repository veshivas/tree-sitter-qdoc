# tree-sitter-qdoc

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [QDoc](https://doc.qt.io/qt-6/qdoc-index.html) — the documentation markup language used by Qt. Parses `/*! ... */` comment blocks and standalone `.qdoc` / `.qdocinc` files into a typed AST suitable for syntax highlighting, linting, and static analysis.

## What It Parses

The grammar covers all 173 QDoc commands across every category:

- **Topic commands** — `\class`, `\fn`, `\page`, `\enum`, `\property`, `\qmltype`, and all QML variants
- **Block structures** — `\list`/`\endlist`, `\table`/`\endtable`, `\if`/`\endif`, `\div`, `\details`, `\omit`, `\raw`, `\legalese`, `\quotation`
- **Code fences** — `\code`/`\endcode`, `\qml`/`\endqml`, `\badcode`/`\endbadcode`
- **Inline formatting** — `\b`, `\e`, `\c`, `\l`, `\a`, `\uicontrol`, `\sub`, `\sup`, `\tm`, `\underline`
- **Images** — `\image filename [alt text]` and `\inlineimage filename [{alt}]`
- **Cross-references** — `\sa`, `\keyword`, `\target`
- **Navigation** — `\nextpage`, `\previouspage`, `\startpage`, `\contentspage`
- **Custom macros** — any `\unknownCommand` is parsed as a `command` with a `macro_name` node rather than producing a parse error

## AST Structure

```
source_file
└── comment
    └── block_comment          ("/*!" ... "*/")
        └── markup*            (one per command or prose run)
            ├── block_command  (\list, \table, \if, \raw, …)
            ├── image_command  (\image filename [alt])
            ├── inlineimage_command
            ├── command        (topic, metadata, xref, code-fence, …)
            ├── inline_command (\b, \c, \e, \l, … with inline_text arg)
            └── text           (free prose)
```

Key node fields:

| Node | Fields |
|------|--------|
| `command` | `command_name` or `macro_name`, optional `command_argument` |
| `inline_command` | `inline_command_name`, `inline_text` |
| `image_command` | `filename` (`image_filename`), optional `alt` (`image_alt_text`) |
| `if_block` | `condition` (`block_argument`), nested `markup*`, optional `else` branch |
| `table_block` | optional `arg`, nested `markup*` including `\header`, `\row`, `\li` |

## External Scanner

`src/scanner.c` handles two tokens that cannot be expressed in pure grammar rules:

- `image_filename` — the non-whitespace token immediately after `\image` on the same line
- `image_alt_text` — the remainder of the same line after the filename, only if separated by a space or tab (not a newline)

This is necessary because tree-sitter's `extras` whitespace handling consumes newlines before the main lexer, making same-line detection impossible without an external scanner.

## Build

```bash
# Regenerate src/parser.c from grammar.js
tree-sitter generate

# Run all corpus tests
tree-sitter test

# Run a single named test
tree-sitter test -f "List block"

# Build native shared/static libraries
make
```

## Language Bindings

Bindings are available for:

| Language | Location |
|----------|----------|
| C | `bindings/c/` |
| Go | `bindings/go/` |
| Node.js | `bindings/node/` |
| Python | `bindings/python/` |
| Rust | `bindings/rust/` |
| Swift | `bindings/swift/` |

**Go binding note:** the generated `bindings/go/binding.go` is missing `-I../../src` in its cgo CFLAGS. This is a one-time fix — add it after cloning:
```go
// #cgo CFLAGS: -std=c11 -fPIC -I../../src
```

**Python:** use the `tree_sitter_qdoc` package from `bindings/python/`. Requires tree-sitter ≥ 0.22 and the new constructor API (`Parser(Language(qdoc_language()))`).

## Corpus Tests

Tests live in `test/corpus/` in tree-sitter's standard format (input → expected S-expression):

- `qdoc.txt` — inline commands, topic commands, images, prose (896 lines)
- `block_commands.txt` — list, table, if/else, raw, and other block structures (344 lines)

## Known Limitations

- **`tree-sitter highlight` from the CLI does not work** out of the box because the directory is named `qdoc-parser` rather than `tree-sitter-qdoc`. Use `tree-sitter query queries/highlights.scm <file>` to test queries directly.
- **Nested `\if` blocks** are parsed but the grammar does not validate that `\if` conditions reference defined variables — that is a QDoc semantic concern, not a parse concern.
- **`\snippet` and `\codeline`** are parsed as generic commands; their file-path and line-number arguments are not typed as separate fields.
- **`\value` table rows** inside `\enum` blocks are parsed as generic commands; the value name and description are not split into typed fields.

## Editor Support

Syntax highlighting is provided for:

| Editor | Mechanism | Files |
|--------|-----------|-------|
| Neovim | tree-sitter queries | `queries/qdoc/highlights.scm`, `queries/doxygen/highlights.scm` |
| Emacs 29+ | `qdoc-ts-mode` (treesit) | `editors/emacs/qdoc-ts-mode.el` |
| Helix | tree-sitter queries | `queries/highlights.scm` |
| VS Code | TextMate grammar | [veshivas/qdoc-lang](https://github.com/veshivas/qdoc-lang) |

Setup instructions for each editor are in `editors/`.
