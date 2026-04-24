; QDoc Tree-sitter Highlights
; Compatible with Neovim (nvim-treesitter), Helix, Zed, and any editor
; using the standard tree-sitter highlight capture names.
; Reference: https://tree-sitter.github.io/tree-sitter/syntax-highlighting

; ─── Comment delimiters ───────────────────────────────────────────────────────

"/*!" @comment.documentation
"*/" @comment.documentation

; ─── Prose text ───────────────────────────────────────────────────────────────

(text)        @comment.documentation
(brace_group) @comment.documentation
(raw_content_chunk) @markup.raw

; ─── Backslash prefix ─────────────────────────────────────────────────────────
; Matches the \ in every command context.

"\\" @punctuation.special

; ─── Block command keywords ───────────────────────────────────────────────────

(list_block      "list"        @keyword.directive
                 "endlist"     @keyword.directive)
(table_block     "table"       @keyword.directive
                 "endtable"    @keyword.directive)
(raw_block       "raw"         @keyword.directive
                 "endraw"      @keyword.directive)
(legalese_block  "legalese"    @keyword.directive
                 "endlegalese" @keyword.directive)
(quotation_block "quotation"   @keyword.directive
                 "endquotation" @keyword.directive)
(omit_block      "omit"        @keyword.directive
                 "endomit"     @keyword.directive)
(div_block       "div"         @keyword.directive
                 "enddiv"      @keyword.directive)
(details_block   "details"     @keyword.directive
                 "enddetails"  @keyword.directive)

(if_block "if"   @keyword.conditional
          "else" @keyword.conditional
          "endif" @keyword.conditional)
(if_block condition: (block_argument) @string.special)

(block_argument) @string.special

; ─── Image commands ───────────────────────────────────────────────────────────

"image"       @keyword.directive
"inlineimage" @keyword.directive

(image_command       filename: (image_filename)  @string.special)
(image_command       alt:      (image_alt_text)  @comment.documentation)
(inlineimage_command filename: (inline_text)     @string.special)
(inlineimage_command alt:      (image_alt)       @comment.documentation)

; ─── Named commands — semantic overrides (specific → general order) ───────────

; Headings
(command
  (command_name) @markup.heading
  (#match? @markup.heading "^(section[1-4]|title|subtitle)$"))

; Warnings / deprecations
(command
  (command_name) @comment.warning
  (#match? @comment.warning "^(warning|deprecated)$"))

; Notes / preliminary markers
(command
  (command_name) @comment.note
  (#match? @comment.note "^(note|preliminary)$"))

; Code-fence markers (\code, \qml, \badcode and their \end* counterparts)
(command
  (command_name) @markup.raw
  (#match? @markup.raw "^(code|qml|badcode)$"))

; "See also" / cross-reference
(command
  (command_name) @markup.link.label
  (#match? @markup.link.label "^(sa|keyword|target)$"))

; Topic commands (class, fn, property, page, …)
(command
  (command_name) @keyword.type
  (#match? @keyword.type
    "^(class|enum|example|externalpage|fn|group|headerfile|macro|module|namespace|page|property|typedef|typealias|variable|qmltype|qmlproperty|qmlmethod|qmlsignal|qmlenum|qmlattachedproperty|qmlattachedsignal|qmlmodule|qmlvaluetype|inqmlmodule|qmlclass|qmlsingletontype)$"))

; All other known command names (fallback for command_name and macro_name)
(command (command_name) @keyword.directive)
(command (macro_name)   @keyword.directive)

; Command arguments (e.g. the identifier after \class, \fn, …)
(command (command_argument)            @string.special)
(command span: (cell_span)             @number)

; ─── Inline formatting commands ───────────────────────────────────────────────
; Patterns are ordered specific → general so that semantic captures take
; priority. Capture names starting with @_ are predicate-only (not highlighted).

; Bold
(inline_command
  (inline_command_name) @_cmd (#match? @_cmd "^(b|bold)$")
  (inline_text) @markup.strong)

; Italic / emphasis
(inline_command
  (inline_command_name) @_cmd (#match? @_cmd "^(e|i)$")
  (inline_text) @markup.italic)

; Inline code / teletype
(inline_command
  (inline_command_name) @_cmd (#match? @_cmd "^(c|tt)$")
  (inline_text) @markup.raw.inline)

; Underline
(inline_command
  (inline_command_name) @_cmd (#eq? @_cmd "underline")
  (inline_text) @markup.underline)

; Parameter reference \a param
(inline_command
  (inline_command_name) @_cmd (#eq? @_cmd "a")
  (inline_text) @variable.parameter)

; Link / cross-reference \l [hints] {target} {alias}
(link_command "l"                   @markup.link.label)
(link_command hints:  (link_hints)  @string.special)
(link_command target: (inline_text) @markup.link)
(link_command alias:  (link_alias)  @markup.link)

; UI control label
(inline_command
  (inline_command_name) @_cmd (#eq? @_cmd "uicontrol")
  (inline_text) @markup.strong)

; Subscript / superscript
(inline_command
  (inline_command_name) @_cmd (#match? @_cmd "^(sub|sup)$")
  (inline_text) @markup.italic)

; Trademark symbol
(inline_command
  (inline_command_name) @_cmd (#eq? @_cmd "tm")
  (inline_text) @string.special)

; Fallback: all inline command names and their text arguments
(inline_command (inline_command_name) @keyword.directive)
(inline_command (inline_text)         @string)
