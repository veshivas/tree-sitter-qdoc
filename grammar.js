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
      $.inline_command,
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

    // Raw content: sequences of non-backslash characters (raw HTML etc.)
    // Stops at \ so \endraw is correctly lexed as the block terminator.
    raw_content_chunk: $ => /[^\\]+/,

    // ---------------------------------------------------------------------------
    // Regular (non-block) commands
    // ---------------------------------------------------------------------------

    command: $ => seq(
      '\\',
      $.command_name,
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

    command_name: $ => token(choice(
      // Topic commands
      'class', 'enum', 'example', 'externalpage', 'fn', 'group',
      'headerfile', 'macro', 'module', 'namespace', 'page', 'property',
      'typedef', 'typealias', 'variable',
      // QML topic commands
      'qmltype', 'qmlproperty', 'qmlmethod', 'qmlsignal', 'qmlenum',
      'qmlattachedproperty', 'qmlattachedsignal', 'qmlmodule',
      'qmlvaluetype', 'inqmlmodule',
      // Special content commands
      'brief', 'note', 'warning',
      // Link commands
      'sa', 'keyword', 'target',
      // Context/relationship commands
      'since', 'deprecated', 'internal', 'preliminary', 'abstract',
      'readonly', 'required', 'inherits', 'overload', 'reimp', 'relates',
      'ingroup', 'inmodule',
      // Code commands (block structure handled externally by Vale; kept as commands)
      'code', 'qml', 'badcode',
      // List/table sub-commands (appear inside list_block / table_block)
      'li', 'row', 'header', 'value', 'omitvalue',
      // Navigation commands
      'section1', 'section2', 'section3', 'section4',
      'nextpage', 'previouspage', 'startpage', 'title'
    )),

    inline_command_name: $ => token(choice(
      'a', 'b', 'c', 'e', 'l', 'sub', 'sup', 'tm', 'tt', 'uicontrol'
    )),

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

    text: $ => /[^\\\*]+/,
  }
});
