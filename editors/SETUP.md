# Syntax Highlighting Setup

Pre-built parser libraries are attached to every [GitHub release](https://github.com/veshivas/tree-sitter-qdoc/releases/latest) as platform archives. Download the archive for your platform, verify the checksum, extract it, then follow the editor-specific instructions below.

## 1. Download and extract

Replace `v0.2.0` with the version you want.

**macOS (Apple Silicon)**
```bash
curl -LO https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.2.0/tree-sitter-qdoc-macos-arm64.tar.gz
tar -xzf tree-sitter-qdoc-macos-arm64.tar.gz
```

**macOS (Intel)**
```bash
curl -LO https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.2.0/tree-sitter-qdoc-macos-x86_64.tar.gz
tar -xzf tree-sitter-qdoc-macos-x86_64.tar.gz
```

**Linux x86_64**
```bash
curl -LO https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.2.0/tree-sitter-qdoc-linux-x86_64.tar.gz
tar -xzf tree-sitter-qdoc-linux-x86_64.tar.gz
```

**Linux arm64**
```bash
curl -LO https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.2.0/tree-sitter-qdoc-linux-arm64.tar.gz
tar -xzf tree-sitter-qdoc-linux-arm64.tar.gz
```

**Windows x86_64**
```powershell
curl -LO https://github.com/veshivas/tree-sitter-qdoc/releases/download/v0.2.0/tree-sitter-qdoc-windows-x86_64.zip
Expand-Archive tree-sitter-qdoc-windows-x86_64.zip .
```

Each archive contains the library binary, a `.sha256` checksum file, `CHANGELOG.md`, and `LICENSE`.

## 2. Verify the checksum

```bash
# macOS
shasum -a 256 -c libtree-sitter-qdoc-macos-arm64.dylib.sha256

# Linux
sha256sum -c libtree-sitter-qdoc-linux-x86_64.so.sha256
```

---

## Neovim

Requires Neovim 0.9+ with nvim-treesitter.

### 1. Install the library

Neovim requires the `.so` extension on all platforms, including macOS.

```bash
mkdir -p ~/.local/share/nvim/site/parser

# macOS Apple Silicon
cp libtree-sitter-qdoc-macos-arm64.dylib ~/.local/share/nvim/site/parser/qdoc.so

# macOS Intel
cp libtree-sitter-qdoc-macos-x86_64.dylib ~/.local/share/nvim/site/parser/qdoc.so

# Linux x86_64
cp libtree-sitter-qdoc-linux-x86_64.so ~/.local/share/nvim/site/parser/qdoc.so

# Linux arm64
cp libtree-sitter-qdoc-linux-arm64.so ~/.local/share/nvim/site/parser/qdoc.so
```

### 2. Clone the grammar repo (for query files)

```bash
git clone https://github.com/veshivas/tree-sitter-qdoc.git ~/tree-sitter-qdoc
```

### 3. Add to `~/.config/nvim/init.lua`

```lua
vim.filetype.add({ extension = { qdoc = "qdoc" } })
vim.opt.runtimepath:append(vim.fn.expand("~/tree-sitter-qdoc"))

-- Redirect the doxygen injected language to the qdoc parser
-- so that /*! ... */ blocks in C++ files also get QDoc highlighting.
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

## Vim / Vi

No parser library required — highlighting is regex-based via a standard Vim syntax file.

### 0. Prerequisites — `~/.vimrc`

Filetype detection and syntax highlighting must be enabled. Add these lines to `~/.vimrc` if not already present:

```vim
filetype on       " enable filetype detection (needed for ftdetect/)
syntax on         " enable syntax highlighting
```

Without `filetype on`, `.qdoc` files are not recognised and no highlighting is applied. Without `syntax on`, the syntax file is loaded but colors are not rendered.

### 1. Install the files

Copy (or symlink) the two files from `editors/vim/` into your Vim runtime directories:

```bash
# ~/.vim/ layout (Vim 8+ native packages or plain runtime)
mkdir -p ~/.vim/syntax ~/.vim/ftdetect

cp editors/vim/syntax/qdoc.vim   ~/.vim/syntax/qdoc.vim
cp editors/vim/ftdetect/qdoc.vim ~/.vim/ftdetect/qdoc.vim
```

Or, if you prefer symlinks so the files stay in sync with the repo:

```bash
ln -s "$(pwd)/editors/vim/syntax/qdoc.vim"  ~/.vim/syntax/qdoc.vim
ln -s "$(pwd)/editors/vim/ftdetect/qdoc.vim" ~/.vim/ftdetect/qdoc.vim
```

**Vim 8+ native packages** — drop the files under a package instead:

```bash
mkdir -p ~/.vim/pack/qdoc/start/qdoc-syntax/syntax
mkdir -p ~/.vim/pack/qdoc/start/qdoc-syntax/ftdetect
cp editors/vim/syntax/qdoc.vim   ~/.vim/pack/qdoc/start/qdoc-syntax/syntax/
cp editors/vim/ftdetect/qdoc.vim ~/.vim/pack/qdoc/start/qdoc-syntax/ftdetect/
```

### 2. Verify

Open any `.qdoc` or `.qdocinc` file and check that the filetype was detected:

```vim
:set ft?
```

Should print `filetype=qdoc`. Run `:syntax list` to see the active highlight groups. If the list is empty, ensure `syntax on` is in your `~/.vimrc`.

### What you get

- Syntax highlighting in standalone `.qdoc` and `.qdocinc` files
- Colors follow the active Vim colorscheme — no hardcoded colors
- Covers all block commands, topic commands, inline formatting, image commands, code fences, headings, and brace-delimited arguments

### C++ and QML files (manual)

Vim has no built-in injection mechanism, so QDoc inside `/*! ... */` blocks is not highlighted automatically. The files below add basic `\command` highlighting inside block comments.

**`~/.vim/after/syntax/cpp.vim`** — for `.cpp` and `.h` files:

```vim
" Highlight \command tokens inside /*! ... */ QDoc block comments
syn match qdocCmdInCpp /\\\a\+/ contained containedin=cComment
hi def link qdocCmdInCpp Keyword
```

**`~/.vim/after/syntax/qml.vim`** — for `.qml` files (requires a QML syntax plugin):

```vim
" Highlight \command tokens inside /*! ... */ QDoc block comments
syn match qdocCmdInQml /\\\a\+/ contained containedin=qmlComment
hi def link qdocCmdInQml Keyword
```

Create the directory if it does not exist:

```bash
mkdir -p ~/.vim/after/syntax
```

---

## Emacs

Requires Emacs 29.1+ compiled with tree-sitter support.
To check: `M-x treesit-available-p` should return `t`.

### 1. Install the library

```bash
mkdir -p ~/.emacs.d/tree-sitter

# macOS Apple Silicon
cp libtree-sitter-qdoc-macos-arm64.dylib ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.dylib

# macOS Intel
cp libtree-sitter-qdoc-macos-x86_64.dylib ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.dylib

# Linux x86_64
cp libtree-sitter-qdoc-linux-x86_64.so ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.so

# Linux arm64
cp libtree-sitter-qdoc-linux-arm64.so ~/.emacs.d/tree-sitter/libtree-sitter-qdoc.so
```

### 2. Clone the grammar repo (for the mode file)

```bash
git clone https://github.com/veshivas/tree-sitter-qdoc.git ~/tree-sitter-qdoc
```

### 3. Add to `~/.emacs.d/init.el`

```elisp
(add-to-list 'treesit-extra-load-path
             (expand-file-name "~/.emacs.d/tree-sitter"))
(add-to-list 'load-path
             (expand-file-name "~/tree-sitter-qdoc/editors/emacs"))
(require 'qdoc-ts-mode)
```

`qdoc-ts-mode` activates automatically for `.qdoc` and `.qdocinc` files. Colors follow the active Emacs theme via standard `font-lock` faces.

---

## Helix

Helix builds tree-sitter grammars from source — no pre-built library needed.

### 1. Register the grammar

Add to `~/.config/helix/languages.toml`:

```toml
[[language]]
name          = "qdoc"
scope         = "source.qdoc"
file-types    = ["qdoc", "qdocinc"]
roots         = []
comment-token = "//"

[language.grammar]
name   = "qdoc"
source = { git = "https://github.com/veshivas/tree-sitter-qdoc", rev = "main" }
```

### 2. Build the grammar

```bash
hx --grammar build
```

Helix reads `queries/highlights.scm` from the repository automatically.

---

## VS Code

Install the **qdoc-lang** extension from the [VS Code Marketplace](https://marketplace.visualstudio.com/items?itemName=AndreasEliasson.qdoc-lang): open the Extensions panel (`Ctrl+Shift+X` / `Cmd+Shift+X`), search for **qdoc-lang**, and click Install.

No parser library required — the extension uses a TextMate grammar. Covers standalone `.qdoc` / `.qdocinc` files and QDoc blocks injected into `.cpp`, `.c`, and `.qml` files.

---

## Sublime Text

Requires Sublime Text 3 (build 3084+) or Sublime Text 4. No parser library required — highlighting uses a native `.sublime-syntax` file.

### 1. Install the syntax file

**Option A — Packages/User (simplest):**

```bash
# macOS
cp editors/sublime/QDoc.sublime-syntax \
   ~/Library/Application\ Support/Sublime\ Text/Packages/User/

# Linux
cp editors/sublime/QDoc.sublime-syntax \
   ~/.config/sublime-text/Packages/User/

# Windows (PowerShell)
Copy-Item editors\sublime\QDoc.sublime-syntax `
  "$env:APPDATA\Sublime Text\Packages\User\"
```

**Option B — dedicated package (keeps things tidy):**

```bash
# macOS
mkdir -p ~/Library/Application\ Support/Sublime\ Text/Packages/QDoc
cp editors/sublime/QDoc.sublime-syntax \
   ~/Library/Application\ Support/Sublime\ Text/Packages/QDoc/

# Linux
mkdir -p ~/.config/sublime-text/Packages/QDoc
cp editors/sublime/QDoc.sublime-syntax \
   ~/.config/sublime-text/Packages/QDoc/
```

### 2. Verify

Sublime Text picks up new syntax files without restarting. Open any `.qdoc` or `.qdocinc` file — the status bar at the bottom right should show **QDoc**. If it shows something else, click it and select **QDoc** from the list, or use the Command Palette (`Ctrl+Shift+P` / `Cmd+Shift+P`) → **Set Syntax: QDoc**.

### What you get

- Syntax highlighting in standalone `.qdoc` and `.qdocinc` files
- Colors follow the active Sublime Text color scheme automatically — no color scheme customization required
- Covers all QDoc commands: block pairs, topic/QML commands, headings, inline formatting (`\b`, `\c`, `\e`, `\l`, `\uicontrol`, …), code fences, image commands, and brace-delimited arguments
- `\` prefix on every command is scoped as punctuation, distinct from the command name

### C++ files — QDoc inside `/*! ... */` blocks (ST4 only)

Install `QDocInCpp.sublime-syntax` alongside `QDoc.sublime-syntax` in the same Packages directory:

```bash
# macOS — Packages/User
cp editors/sublime/QDocInCpp.sublime-syntax \
   ~/Library/Application\ Support/Sublime\ Text/Packages/User/

# Linux — Packages/User
cp editors/sublime/QDocInCpp.sublime-syntax \
   ~/.config/sublime-text/Packages/User/
```

This adds a **C++ (QDoc)** entry to the syntax picker. Sublime Text has no automatic injection mechanism, so you need to apply it explicitly:

**Per file** — click the syntax name in the status bar and select **C++ (QDoc)**.

**Per project** — add a syntax override in your `.sublime-project` file:

```json
{
  "folders": [{ "path": "." }],
  "file_exclude_patterns": [],
  "syntax_override": {
    "\\.(?:cpp|cxx|cc|h|hpp)$": "Packages/User/QDocInCpp.sublime-syntax"
  }
}
```

> **Note:** `QDocInCpp.sublime-syntax` uses the `extends` key, which requires **Sublime Text 4**. It has no effect in ST3. Regular `/* ... */` comments in C++ are unaffected — only `/*!` blocks get QDoc highlighting. Works in all contexts including class bodies and header files.

### QML files — QDoc inside `/*! ... */` blocks (ST4 only)

Requires the **QML** package from Package Control. Install it first, then install `QDocInQml.sublime-syntax` alongside `QDoc.sublime-syntax`:

```bash
# macOS — Packages/User
cp editors/sublime/QDocInQml.sublime-syntax \
   ~/Library/Application\ Support/Sublime\ Text/Packages/User/

# Linux — Packages/User
cp editors/sublime/QDocInQml.sublime-syntax \
   ~/.config/sublime-text/Packages/User/
```

This adds a **QML (QDoc)** entry to the syntax picker. Apply it explicitly:

**Per file** — click the syntax name in the status bar and select **QML (QDoc)**.

**Per project** — add a syntax override in your `.sublime-project` file:

```json
{
  "folders": [{ "path": "." }],
  "syntax_override": {
    "\\.qml$": "Packages/User/QDocInQml.sublime-syntax"
  }
}
```

> **Note:** `QDocInQml.sublime-syntax` requires **Sublime Text 4** and the **QML** package from Package Control. Regular `/* ... */` comments in QML are unaffected — only `/*!` blocks get QDoc highlighting.
