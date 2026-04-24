# Changelog

## [0.2.0] — 2026-04-24

### Grammar

- `\l` link command now parsed as a dedicated `link_command` node with typed fields: optional `hints` (`[QML]`, `[CPP]`, etc.), required `target`, and optional `alias`
- Added `brace_group` node for `{...}` sequences in prose (previously consumed by the greedy `text` rule)

### Syntax Highlighting

- Updated highlight queries (`queries/highlights.scm`, `queries/qdoc/highlights.scm`) and `qdoc-ts-mode.el` to use field-based `link_command` captures
- `brace_group` highlighted as documentation prose in all highlight files

### Documentation

- README editor support section expanded with step-by-step setup instructions for Neovim, Emacs, Helix, and VS Code
- AST structure and node fields table updated to reflect `link_command` and `brace_group`

[0.2.0]: https://github.com/veshivas/tree-sitter-qdoc/releases/tag/v0.2.0

## [0.1.0] — 2026-04-23

Initial release of the tree-sitter grammar for QDoc markup.

### Grammar

- Parse `/*! ... */` doc comment blocks and standalone `.qdoc` / `.qdocinc` files into a typed AST
- Full coverage of all 173 QDoc commands across all categories: topic, metadata, block, inline, code-fence, image, navigation, and cross-reference commands
- Paired block structures with nested markup: `\list`/`\endlist`, `\table`/`\endtable`, `\if`/`\else`/`\endif`, `\div`, `\details`, `\omit`, `\raw`, `\legalese`, `\quotation`
- Inline formatting commands (`\b`, `\e`, `\c`, `\l`, `\a`, `\uicontrol`, `\sub`, `\sup`, `\tm`, `\underline`) with brace-delimited or single-word arguments
- External scanner for `\image` and `\inlineimage`: captures filename and alt text as separate typed nodes, correctly scoped to the same line
- Catch-all `macro_name` node for custom `\unknownCommand` macros — no parse errors for project-specific commands

### Language Bindings

Bindings for C, Go, Node.js, Python, Rust, and Swift.

### Syntax Highlighting

- **Neovim**: tree-sitter highlight queries in `queries/qdoc/highlights.scm` (standalone `.qdoc` files) and `queries/doxygen/highlights.scm` (QDoc inside C++ `/*! */` blocks via nvim-treesitter's doxygen injection)
- **Emacs 29+**: `qdoc-ts-mode` in `editors/emacs/qdoc-ts-mode.el` — inherits colors from the active theme via standard `font-lock-*` faces
- **Helix / Zed / tree-sitter CLI**: `queries/highlights.scm` using standard capture names

### VS Code Extension

TextMate-based highlighting in the companion [qdoc-lang](https://github.com/veshivas/qdoc-lang) extension:
- Standalone `.qdoc` and `.qdocinc` files
- QDoc highlighting injected into C++ and QML `/*! */` blocks

### Pre-built Libraries

Parser libraries for all major platforms are attached to this release. See [editors/SETUP.md](editors/SETUP.md) for download and installation instructions.

[0.1.0]: https://github.com/veshivas/tree-sitter-qdoc/releases/tag/v0.1.0
