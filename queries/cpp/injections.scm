; Inject QDoc highlighting into /*! ... */ comment blocks in C++ files.
; Neovim finds this file via runtimepath: queries/cpp/injections.scm

((comment) @injection.content
  (#match? @injection.content "^/\\*!")
  (#set! injection.language "qdoc"))
