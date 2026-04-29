" Vim syntax file for QDoc markup
" Language:    QDoc
" Maintainer:  tree-sitter-qdoc contributors
" URL:         https://github.com/veshivas/tree-sitter-qdoc
" License:     MIT

if exists("b:current_syntax")
  finish
endif

" ── Comment delimiters ────────────────────────────────────────────────────────

syn match qdocDelimiter /\/\*!/
syn match qdocDelimiter /\*\//

" ── Block command pairs ───────────────────────────────────────────────────────
" \list/\endlist, \table/\endtable, \raw/\endraw, etc.

syn match qdocBlockCmd /\\\%(list\|endlist\|table\|endtable\|raw\|endraw\|legalese\|endlegalese\|quotation\|endquotation\|omit\|endomit\|div\|enddiv\|details\|enddetails\|if\|else\|endif\)\>/

" ── Topic commands ────────────────────────────────────────────────────────────

syn match qdocTopicCmd /\\\%(class\|enum\|example\|externalpage\|fn\|group\|headerfile\|macro\|module\|namespace\|page\|property\|typedef\|typealias\|variable\)\>/
syn match qdocTopicCmd /\\\%(qmltype\|qmlproperty\|qmlmethod\|qmlsignal\|qmlenum\|qmlattachedproperty\|qmlattachedsignal\|qmlmodule\|qmlvaluetype\|inqmlmodule\|qmlclass\|qmlsingletontype\)\>/
syn match qdocTopicCmd /\\\%(qmlabstract\|qmldefault\|qmlenumeratorsfrom\)\>/

" ── Semantic markers ──────────────────────────────────────────────────────────

syn match qdocWarning  /\\\%(warning\|deprecated\)\>/
syn match qdocNote     /\\\%(note\|preliminary\)\>/
syn match qdocHeading  /\\\%(section[1-4]\|title\|subtitle\)\>/

" ── Code fence markers ────────────────────────────────────────────────────────

syn match qdocCodeFence /\\\%(code\|badcode\|qml\|endcode\|endqml\|endbadcode\)\>/

" ── Image commands ────────────────────────────────────────────────────────────

syn match qdocImageCmd /\\\%(image\|inlineimage\)\>/

" ── Inline formatting commands ────────────────────────────────────────────────
" Longer alternatives are listed first within each group so that vim's
" alternation tries them before the single-letter fallback.

syn match qdocBold       /\\\%(bold\|b\)\>/
syn match qdocItalic     /\\\%(e\|i\)\>/
syn match qdocInlineCode /\\\%(tt\|c\)\>/
syn match qdocUnderline  /\\underline\>/
syn match qdocParam      /\\a\>/
syn match qdocLink       /\\l\>/
syn match qdocUiCtrl     /\\uicontrol\>/
syn match qdocSubSup     /\\\%(sub\|sup\)\>/
syn match qdocTm         /\\tm\>/

" ── All other known commands ──────────────────────────────────────────────────

syn match qdocCmd /\\\%(brief\|caption\|sa\|keyword\|target\)\>/
syn match qdocCmd /\\\%(since\|internal\|abstract\|readonly\|required\|inherits\|overload\|reimp\|relates\|ingroup\|inmodule\|inheaderfile\)\>/
syn match qdocCmd /\\\%(threadsafe\|reentrant\|nonreentrant\)\>/
syn match qdocCmd /\\\%(nativetype\|instantiates\|modulestate\|attribution\|meta\|compares\|compareswith\|notranslate\|default\|wrapper\)\>/
syn match qdocCmd /\\\%(cmakecomponent\|cmakepackage\|cmaketargetitem\)\>/
syn match qdocCmd /\\\%(codeline\|include\|snippet\|quotefile\|quotefromfile\|printline\|printto\|printuntil\|skipline\|skipto\|skipuntil\)\>/
syn match qdocCmd /\\\%(li\|row\|header\|value\|omitvalue\)\>/
syn match qdocCmd /\\\%(br\|dots\|o\|span\)\>/
syn match qdocCmd /\\\%(nextpage\|previouspage\|startpage\)\>/
syn match qdocCmd /\\\%(toc\|tocentry\|generatelist\|annotatedlist\|sincelist\|noautolist\)\>/

" ── Brace-delimited arguments ─────────────────────────────────────────────────

syn match qdocArg /{[^}]*}/

" ── Highlight links ───────────────────────────────────────────────────────────
" All link to standard Vim highlight groups so colors follow the active theme.

hi def link qdocDelimiter  Comment
hi def link qdocBlockCmd   PreProc
hi def link qdocTopicCmd   Type
hi def link qdocWarning    WarningMsg
hi def link qdocNote       Todo
hi def link qdocHeading    Title
hi def link qdocCodeFence  Special
hi def link qdocImageCmd   PreProc
hi def link qdocBold       Bold
hi def link qdocItalic     Italic
hi def link qdocInlineCode Special
hi def link qdocUnderline  Underlined
hi def link qdocParam      Identifier
hi def link qdocLink       Underlined
hi def link qdocUiCtrl     Bold
hi def link qdocSubSup     Special
hi def link qdocTm         String
hi def link qdocCmd        Keyword
hi def link qdocArg        String

let b:current_syntax = "qdoc"
