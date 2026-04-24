;;; qdoc-ts-mode.el --- Tree-sitter major mode for QDoc markup  -*- lexical-binding: t -*-
;;
;; Requires Emacs 29.1+ compiled with tree-sitter support.
;;
;; Highlighting inherits standard font-lock faces so colors are controlled
;; by the active Emacs theme — no hardcoded colors.
;;
;; Setup
;; -----
;; 1. Build the parser library:
;;
;;      cd /path/to/qdoc-parser
;;      cc -dynamiclib -fPIC -I./src src/parser.c src/scanner.c \
;;         -o libtree-sitter-qdoc.dylib          # macOS
;;      # or:
;;      cc -shared -fPIC -I./src src/parser.c src/scanner.c \
;;         -o libtree-sitter-qdoc.so             # Linux
;;
;; 2. Move the library to a directory on treesit-extra-load-path, e.g.:
;;
;;      mkdir -p ~/.emacs.d/tree-sitter
;;      mv libtree-sitter-qdoc.dylib ~/.emacs.d/tree-sitter/
;;
;; 3. In your init.el:
;;
;;      (add-to-list 'treesit-extra-load-path
;;                   (expand-file-name "~/.emacs.d/tree-sitter"))
;;      (add-to-list 'load-path "/path/to/qdoc-parser/editors/emacs")
;;      (require 'qdoc-ts-mode)

(require 'treesit)

(declare-function treesit-parser-create "treesit.c")
(declare-function treesit-ready-p "treesit.c")

;;; Font-lock rules

(defvar qdoc-ts--topic-commands-re
  (concat "^\\("
          (mapconcat #'identity
                     '("class" "enum" "example" "externalpage" "fn" "group"
                       "headerfile" "macro" "module" "namespace" "page"
                       "property" "typedef" "typealias" "variable"
                       "qmltype" "qmlproperty" "qmlmethod" "qmlsignal"
                       "qmlenum" "qmlattachedproperty" "qmlattachedsignal"
                       "qmlmodule" "qmlvaluetype" "inqmlmodule"
                       "qmlclass" "qmlsingletontype")
                     "\\|")
          "\\)$")
  "Regexp matching QDoc topic command names.")

(defvar qdoc-ts--font-lock-settings
  (treesit-font-lock-rules

   ;; ── Level 1: delimiters and prose ──────────────────────────────────────

   :language 'qdoc
   :feature 'comment
   '("/*!" @font-lock-comment-delimiter-face
     "*/"  @font-lock-comment-delimiter-face
     (text)        @font-lock-doc-face
     (brace_group) @font-lock-doc-face)

   ;; ── Level 2: keywords ──────────────────────────────────────────────────

   :language 'qdoc
   :feature 'keyword
   '("\\" @font-lock-keyword-face

     ["list"     "endlist"
      "table"    "endtable"
      "raw"      "endraw"
      "legalese" "endlegalese"
      "quotation" "endquotation"
      "omit"     "endomit"
      "div"      "enddiv"
      "details"  "enddetails"
      "if"       "else"         "endif"
      "image"    "inlineimage"]
     @font-lock-keyword-face

     (command (command_name) @font-lock-keyword-face)
     (command (macro_name)   @font-lock-keyword-face)
     (inline_command (inline_command_name) @font-lock-keyword-face))

   ;; ── Level 2: topic commands ────────────────────────────────────────────

   :language 'qdoc
   :feature 'type
   :override t
   `((command
      (command_name) @font-lock-type-face
      (:match ,qdoc-ts--topic-commands-re @font-lock-type-face)))

   ;; ── Level 3: string arguments ──────────────────────────────────────────

   :language 'qdoc
   :feature 'string
   '((command (command_argument) @font-lock-string-face)
     (block_argument)            @font-lock-string-face
     (if_block condition: (block_argument) @font-lock-string-face)
     (image_command       filename: (image_filename) @font-lock-string-face)
     (image_command       alt:      (image_alt_text) @font-lock-doc-face)
     (inlineimage_command filename: (inline_text)    @font-lock-string-face)
     (inlineimage_command alt:      (image_alt)      @font-lock-doc-face)
     (raw_content_chunk)  @font-lock-constant-face
     (command
      (command_name) @font-lock-string-face
      (:match "^\\(sa\\|keyword\\|target\\)$" @font-lock-string-face))
     (inline_command (inline_text) @font-lock-string-face))

   ;; ── Level 3: semantic markup overrides ────────────────────────────────

   :language 'qdoc
   :feature 'markup
   :override t
   '(;; Headings — bold weight adds a non-color cue
     (command
      (command_name) @font-lock-keyword-face
      (:match "^\\(section[1-4]\\|title\\|subtitle\\)$" @font-lock-keyword-face))

     ;; Warnings / deprecations
     (command
      (command_name) @font-lock-warning-face
      (:match "^\\(warning\\|deprecated\\)$" @font-lock-warning-face))

     ;; Notes
     (command
      (command_name) @font-lock-doc-face
      (:match "^\\(note\\|preliminary\\)$" @font-lock-doc-face))

     ;; Bold \b{} \bold{}
     (inline_command
      (inline_command_name) @_cmd
      (:match "^\\(b\\|bold\\)$" @_cmd)
      (inline_text) @bold)

     ;; Italic \e{} \i{}
     (inline_command
      (inline_command_name) @_cmd
      (:match "^\\(e\\|i\\)$" @_cmd)
      (inline_text) @italic)

     ;; Inline code \c{} \tt{}
     (inline_command
      (inline_command_name) @_cmd
      (:match "^\\(c\\|tt\\)$" @_cmd)
      (inline_text) @font-lock-constant-face)

     ;; Underline \underline{}
     (inline_command
      (inline_command_name) @_cmd
      (:equal @_cmd "underline")
      (inline_text) @underline)

     ;; Parameter reference \a param — italic adds a non-color cue
     (inline_command
      (inline_command_name) @_cmd
      (:equal @_cmd "a")
      (inline_text) @font-lock-variable-name-face)

     ;; Link \l [hints] {target} {alias}
     (link_command "l"                   @font-lock-keyword-face)
     (link_command hints:  (link_hints)  @font-lock-string-face)
     (link_command target: (inline_text) @font-lock-string-face)
     (link_command alias:  (link_alias)  @font-lock-string-face)

     ;; UI control \uicontrol{}
     (inline_command
      (inline_command_name) @_cmd
      (:equal @_cmd "uicontrol")
      (inline_text) @bold)))

  "Tree-sitter font-lock settings for `qdoc-ts-mode'.")

;;; Major mode

;;;###autoload
(define-derived-mode qdoc-ts-mode prog-mode "QDoc"
  "Major mode for QDoc markup files, powered by tree-sitter.

Uses the tree-sitter grammar for QDoc to provide semantic syntax
highlighting for commands, inline formatting, and prose text.
Colors are inherited from the active theme via standard font-lock faces."
  :syntax-table (make-syntax-table)

  (unless (treesit-ready-p 'qdoc)
    (error "Tree-sitter grammar for QDoc is not available.  \
See the setup instructions in qdoc-ts-mode.el"))

  (treesit-parser-create 'qdoc)

  ;; Font-lock
  (setq-local treesit-font-lock-settings qdoc-ts--font-lock-settings)
  (setq-local treesit-font-lock-feature-list
              '((comment)
                (keyword type)
                (string markup)))

  (treesit-major-mode-setup))

;;; File associations

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.qdoc\\'"    . qdoc-ts-mode))
;;;###autoload
(add-to-list 'auto-mode-alist '("\\.qdocinc\\'" . qdoc-ts-mode))

(provide 'qdoc-ts-mode)
;;; qdoc-ts-mode.el ends here
