# Syntax Highlighting Setup

Pre-built parser libraries are attached to every [GitHub release](https://github.com/veshivas/tree-sitter-qdoc/releases/latest). Download the one for your platform, then follow the editor-specific instructions below.

## Download the library

Replace `v0.1.0` with the version you want, or use `latest` to always get the most recent release.

| Platform | Command |
|----------|---------|
| macOS (Apple Silicon) | `curl -L -o libtree-sitter-qdoc.dylib https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/libtree-sitter-qdoc-macos-arm64.dylib` |
| macOS (Intel) | `curl -L -o libtree-sitter-qdoc.dylib https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/libtree-sitter-qdoc-macos-x86_64.dylib` |
| Linux x86_64 | `curl -L -o libtree-sitter-qdoc.so https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/libtree-sitter-qdoc-linux-x86_64.so` |
| Linux arm64 | `curl -L -o libtree-sitter-qdoc.so https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/libtree-sitter-qdoc-linux-arm64.so` |
| Windows x86_64 | `curl -L -o tree-sitter-qdoc.dll https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/tree-sitter-qdoc-windows-x86_64.dll` |

### Verify the checksum

```bash
# Download the checksum alongside the library, e.g. for macOS Apple Silicon:
curl -L -o libtree-sitter-qdoc.dylib.sha256 \
  https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.1.0/libtree-sitter-qdoc-macos-arm64.dylib.sha256

# Verify
sha256sum -c libtree-sitter-qdoc.dylib.sha256        # Linux
shasum -a 256 -c libtree-sitter-qdoc.dylib.sha256    # macOS
```

---

## Neovim

Requires Neovim 0.9+ with nvim-treesitter.

### 1. Install the library

```bash
mkdir -p ~/.local/share/nvim/site/parser

# macOS Apple Silicon
cp libtree-sitter-qdoc-macos-arm64.dylib \
   ~/.local/share/nvim/site/parser/qdoc.so

# macOS Intel
cp libtree-sitter-qdoc-macos-x86_64.dylib \
   ~/.local/share/nvim/site/parser/qdoc.so

# Linux x86_64
cp libtree-sitter-qdoc-linux-x86_64.so \
   ~/.local/share/nvim/site/parser/qdoc.so

# Linux arm64
cp libtree-sitter-qdoc-linux-arm64.so \
   ~/.local/share/nvim/site/parser/qdoc.so
```

Note: Neovim requires the `.so` extension on all platforms including macOS.

### 2. Clone the grammar repo (for query files)

```bash
git clone https://github.com/veshivas/tree-sitter-qdoc.git \
    ~/tree-sitter-qdoc
```

### 3. Add to `~/.config/nvim/init.lua`

```lua
vim.filetype.add({ extension = { qdoc = "qdoc" } })
vim.opt.runtimepath:append(vim.fn.expand("~/tree-sitter-qdoc"))

vim.treesitter.language.add('doxygen', {
  path = vim.fn.stdpath('data') .. '/site/parser/qdoc.so',
  symbol_name = 'qdoc',
})

vim.api.nvim_create_autocmd("FileType", {
  pattern = { "qdoc", "cpp" },
  callback = function() vim.treesitter.start() end,
})
```

### What you get

- Syntax highlighting in standalone `.qdoc` and `.qdocinc` files
- QDoc highlighting inside C++ `/*! ... */` blocks

---

## Emacs

Requires Emacs 29.1+ compiled with tree-sitter support.  
To check: `M-x treesit-available-p` should return `t`.

### 1. Install the library

```bash
mkdir -p ~/.emacs.d/tree-sitter

# macOS Apple Silicon
cp libtree-sitter-qdoc-macos-arm64.dylib \
   ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.dylib

# macOS Intel
cp libtree-sitter-qdoc-macos-x86_64.dylib \
   ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.dylib

# Linux x86_64
cp libtree-sitter-qdoc-linux-x86_64.so \
   ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.so

# Linux arm64
cp libtree-sitter-qdoc-linux-arm64.so \
   ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.so
```

### 2. Install the mode file

```bash
git clone https://github.com/veshivas/tree-sitter-qdoc.git \
    ~/tree-sitter-qdoc
```

### 3. Add to `~/.emacs.d/init.el`

```elisp
(add-to-list 'treesit-extra-load-path
             (expand-file-name "~/.emacs.d/tree-sitter"))
(add-to-list 'load-path
             (expand-file-name "~/tree-sitter-qdoc/editors/emacs"))
(require 'qdoc-ts-mode)
```

`qdoc-ts-mode` activates automatically for `.qdoc` and `.qdocinc` files. Colors follow the active Emacs theme.

---

## Helix

Helix builds tree-sitter grammars from source — no pre-built library needed.

### 1. Register the grammar

Add to `~/.config/helix/languages.toml`:

```toml
[[language]]
name         = "qdoc"
scope        = "source.qdoc"
file-types   = ["qdoc", "qdocinc"]
roots        = []
comment-token = "//"

[language.grammar]
name   = "qdoc"
source = { git = "https://github.com/veshivas/tree-sitter-qdoc",
           rev  = "main" }
```

### 2. Build the grammar

```bash
hx --grammar build
```

Helix reads `queries/highlights.scm` from the repository automatically.

---

## VS Code

The [qdoc-lang](https://github.com/veshivas/qdoc-lang) extension provides TextMate-based highlighting — no parser library required.

### Install from Marketplace

Search for **QDoc** in the VS Code Extensions panel, or install from the command line:

```bash
code --install-extension veshivas.qdoc-lang
```

### What you get

- Syntax highlighting in `.qdoc` and `.qdocinc` files
- QDoc highlighting injected into `/*! ... */` blocks in `.cpp`, `.c`, and `.qml` files
