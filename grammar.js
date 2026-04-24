module.exports = grammar({
  name: 'qdoc',

  externals: $ => [
    $.image_filename,   // handled by src/scanner.c
    $.image_alt_text,   // handled by src/scanner.c
  ],

  extras: $ => [/\s/],  // Whitespace including newlines

  rules: {
    source_file: $ => repeat($.comment),

    comment: $ => $.block_comment,

    // QDoc comments require delimiters on separate lines
    block_comment: $ => prec.right(seq(
      '/*!',
      repeat($.markup),
      '*/'
    )),

    markup: $ => choice(
      $.block_command,
      $.image_command,
      $.inlineimage_command,
      $.command,
      $.link_command,
      $.inline_command,
      $.brace_group,
      $.text
    ),

    // ---------------------------------------------------------------------------
    // Block commands: open/close pairs with structured or raw content
    // ---------------------------------------------------------------------------

    block_command: $ => choice(
      $.list_block,
      $.table_block,
      $.raw_block,
      $.legalese_block,
      $.quotation_block,
      $.omit_block,
      $.div_block,
      $.details_block,
      $.if_block,
    ),

    // \list [type] ... \li items ... \endlist
    list_block: $ => seq(
      '\\', 'list',
      optional(field('arg', $.block_argument)),
      repeat($.markup),
      '\\', 'endlist'
    ),

    // \table [width%] ... \header/\row/\li ... \endtable
    table_block: $ => seq(
      '\\', 'table',
      optional(field('arg', $.block_argument)),
      repeat($.markup),
      '\\', 'endtable'
    ),

    // \raw [format] ... raw passthrough content ... \endraw
    raw_block: $ => seq(
      '\\', 'raw',
      optional(field('arg', $.block_argument)),
      repeat($.raw_content_chunk),
      '\\', 'endraw'
    ),

    // \legalese ... prose/markup ... \endlegalese
    legalese_block: $ => seq(
      '\\', 'legalese',
      repeat($.markup),
      '\\', 'endlegalese'
    ),

    // \quotation ... prose/markup ... \endquotation
    quotation_block: $ => seq(
      '\\', 'quotation',
      repeat($.markup),
      '\\', 'endquotation'
    ),

    // \omit ... prose/markup ... \endomit
    omit_block: $ => seq(
      '\\', 'omit',
      repeat($.markup),
      '\\', 'endomit'
    ),

    // \div {class} ... prose/markup ... \enddiv
    div_block: $ => seq(
      '\\', 'div',
      optional(field('arg', $.block_argument)),
      repeat($.markup),
      '\\', 'enddiv'
    ),

    // \details ... prose/markup ... \enddetails
    details_block: $ => seq(
      '\\', 'details',
      repeat($.markup),
      '\\', 'enddetails'
    ),

    // \if condition ... [\else ...] \endif
    if_block: $ => seq(
      '\\', 'if',
      field('condition', $.block_argument),
      field('then', repeat($.markup)),
      optional(seq('\\', 'else', field('else', repeat($.markup)))),
      '\\', 'endif'
    ),

    // Raw content: sequences of non-backslash characters (raw HTML etc.)
    // Stops at \ so \endraw is correctly lexed as the block terminator.
    raw_content_chunk: $ => /[^\\]+/,

    // ---------------------------------------------------------------------------
    // Regular (non-block) commands
    // ---------------------------------------------------------------------------

    command: $ => seq(
      '\\',
      choice($.command_name, $.macro_name),
      optional(choice(
        field('span', $.cell_span),
        $.command_argument
      ))
    ),

    inline_command: $ => seq(
      '\\',
      $.inline_command_name,
      $.inline_text
    ),

    // \l [optional-hints] {target} {optional-alias}
    // hints   — entity type / module scoping hint, e.g. [QML], [CPP QtWidgets]
    // target  — link destination, brace-delimited or single word
    // alias   — display text shown instead of the target
    link_command: $ => prec.right(seq(
      '\\',
      'l',
      optional(field('hints',  $.link_hints)),
      field('target', $.inline_text),
      optional(field('alias',  $.link_alias))
    )),

    link_hints: $ => /\[[^\]]*\]/,
    // prec(1) beats brace_group (prec 0) when both match {same length text}
    link_alias: $ => token(prec(1, /\{[^}]*\}/)),

    command_name: $ => token(choice(
      // Topic commands
      'class', 'enum', 'example', 'externalpage', 'fn', 'group',
      'headerfile', 'macro', 'module', 'namespace', 'page', 'property',
      'typedef', 'typealias', 'variable',
      // QML topic commands
      'qmltype', 'qmlproperty', 'qmlmethod', 'qmlsignal', 'qmlenum',
      'qmlattachedproperty', 'qmlattachedsignal', 'qmlmodule',
      'qmlvaluetype', 'inqmlmodule',
      // QML topic commands (deprecated aliases)
      'qmlclass', 'qmlsingletontype',
      // QML modifiers
      'qmlabstract', 'qmldefault', 'qmlenumeratorsfrom',
      // Special content commands
      'brief', 'note', 'warning', 'caption', 'subtitle',
      // Link commands
      'sa', 'keyword', 'target',
      // Context/relationship commands
      'since', 'deprecated', 'internal', 'preliminary', 'abstract',
      'readonly', 'required', 'inherits', 'overload', 'reimp', 'relates',
      'ingroup', 'inmodule', 'inheaderfile',
      // Thread-safety markers
      'threadsafe', 'reentrant', 'nonreentrant',
      // Type/module metadata
      'nativetype', 'instantiates', 'modulestate', 'attribution', 'meta',
      'compares', 'compareswith', 'notranslate', 'default', 'wrapper',
      // CMake integration
      'cmakecomponent', 'cmakepackage', 'cmaketargetitem',
      // Code commands (block structure handled externally by Vale; kept as commands)
      'code', 'qml', 'badcode',
      // Code quoting / file inclusion
      'codeline', 'include', 'snippet',
      'quotefile', 'quotefromfile',
      'printline', 'printto', 'printuntil',
      'skipline', 'skipto', 'skipuntil',
      // List/table sub-commands (appear inside list_block / table_block)
      'li', 'row', 'header', 'value', 'omitvalue',
      // Inline text formatting (no argument form)
      'br', 'dots', 'o', 'span',
      // Navigation commands
      'section1', 'section2', 'section3', 'section4',
      'nextpage', 'previouspage', 'startpage', 'title',
      // Generated/navigated lists
      'toc', 'tocentry', 'generatelist', 'annotatedlist', 'sincelist', 'noautolist'
    )),

    inline_command_name: $ => token(choice(
      'a', 'b', 'bold', 'c', 'e', 'i', 'sub', 'sup', 'tm', 'tt', 'uicontrol', 'underline'
    )),

    // Catch-all for custom macros (e.g. \macos, \youtube).
    // Defined AFTER inline_command_name so that inline command literals
    // win by definition order for same-length matches (e.g. \a, \b, \l).
    // Known command_name literals and block command literals win by
    // match length (they are longer or equal and are string literals).
    macro_name: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    // ---------------------------------------------------------------------------
    // Image commands
    // ---------------------------------------------------------------------------

    // \image filename [alt text]
    // image_filename and image_alt_text are external tokens (see src/scanner.c).
    // The external scanner is called before extras are consumed, so it can
    // detect whether alt text follows on the same line (space after filename)
    // or not (newline after filename). This correctly enforces the same-line
    // constraint that token.immediate cannot provide with tree-sitter@0.20.8.
    image_command: $ => choice(
      prec(1, seq(
        '\\', 'image',
        field('filename', $.image_filename),
        field('alt', $.image_alt_text),
      )),
      seq(
        '\\', 'image',
        field('filename', $.image_filename),
      ),
    ),

    // \inlineimage filename [{alt text}]
    // Two alternatives: with and without brace-delimited alt text.
    // The conflicts declaration above enables GLR for the ambiguity between
    // this rule (wanting to shift image_alt) and the following text node.
    // prec(1) steers GLR to prefer capturing the alt text inside the node.
    inlineimage_command: $ => choice(
      prec(1, seq(
        '\\', 'inlineimage',
        field('filename', $.inline_text),
        field('alt', $.image_alt),
      )),
      seq(
        '\\', 'inlineimage',
        field('filename', $.inline_text),
      ),
    ),

    // Brace-delimited alt text for \inlineimage: {alt text}
    image_alt: $ => token(prec(1, /\{[^}]*\}/)),

    // Block-command argument (e.g. \list 1, \table 80%, \raw HTML).
    // token(prec(1,...)) ensures it wins over the greedy text rule.
    block_argument: $ => token(prec(1, choice(
      /\{[^}]*\}/,    // {brace-delimited}
      /[^\s\\{}]+/    // single word, no braces
    ))),

    // Table cell span: {rows,cols} before cell content.
    cell_span: $ => token(prec(1, /\{[0-9]+,[0-9]+\}/)),

    command_argument: $ => /[^\s]+/,

    inline_text: $ => token(choice(
      /\{[^}]*\}/,     // {brace-delimited argument, may contain spaces}
      /[^\s\\{}\n]+/   // single-word argument, stops at whitespace
    )),

    // Prose text: anything except backslash, asterisk, and opening brace.
    // Brace sequences ({...}) are handled as brace_group so that link_alias
    // can compete for {alias} without the greedy text rule winning.
    text: $ => /[^\\\*{]+/,

    // {brace-delimited} content appearing in prose (not a command argument).
    brace_group: $ => /\{[^}]*\}/,
  }
});
