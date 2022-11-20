module.exports = grammar({

  name: 'hush',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment
  ],

  word: $ => $.identifier,

  rules: {

    // Root

    source_file: $ => repeat($._statement),

    // Statements

    _statement: $ => prec(-100, choice(
      $.assignment,
      $.break,
      $.for,
      $.function_statement,
      $.return,
      $.variable_declaration,
      $.while,
      $._expression
    )),

    assignment: $ => seq(
      choice(
        $.array_index,
        $.dictionary_index,
        $.identifier
      ),
      '=',
      $._expression
    ),

    break: _ => 'break',

    for: $ => seq(
      'for',
      $.identifier,
      'in',
      $._expression,
      'do',
      optional($.block),
      'end'
    ),

    function_statement: $ => seq(
      'function',
      field("name", $.identifier),
      $.function_parameters,
      optional($.block),
      'end'
    ),

    return: $ => prec.left(seq(
      'return',
      optional($._expression),
    )),

    variable_declaration: $ => seq(
      'let',
      $.identifier,
      optional(seq(
        '=',
        $._expression
      ))
    ),

    while: $ => seq(
      'while',
      $._expression,
      'do',
      optional($.block),
      'end'
    ),

    // Statement parts

    block: $ => seq(
      $._statement,
      repeat($._statement)
    ),

    // Expressions

    _expression: $ => prec.left(choice(
      $.array_declaration,
      $.array_index,
      $.binary_expression,
      $.capture_block,
      $.command_block,
      $.dictionary_declaration,
      $.dictionary_index,
      $.function_call,
      $.function_expression,
      $.identifier,
      $.if,
      $.try,
      $.unary_expression,
      $._literals
    )),

    array_declaration: $ => prec.left(seq(
      '[',
      repeat($._expression),
      ']'
    )),

    array_index: $ => prec.left(5, seq(
      $._expression, 
      '[',
      $._expression,
      ']'
    )),

    binary_expression: $ => prec.left(-5, seq(
      $._expression,
      $.binary_operator,
      $._expression
    )),

    capture_block: $ => seq(
      '${',
      $.shell_command,
      '}'
    ),

    command_block: $ => seq(
      '{',
      $.shell_command,
      '}'
    ),

    dictionary_declaration: $ => seq(
      '@[',
      repeat(seq(
        $.identifier,
        ':',
        $._expression
      )),
      ']'
    ),

    dictionary_index: $ => seq(
      choice(
        'std',
        $._expression
      ),
      '.',
      prec.right(choice(
        field('method', seq($.identifier, $.function_arguments)),
        field('property', $.identifier)
      ))
    ),

    function_call: $ => seq(
      $._expression,
      $.function_arguments
    ),

    function_expression: $ => seq(
      'function',
      $.function_parameters,
      optional($.block),
      'end'
    ),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    if: $ => seq(
      'if',
      $._expression,
      'then',
      optional($.block),
      optional(repeat(seq(
        'elseif',
        $._expression,
        'then',
        optional($.block)
      ))),
      optional(seq(
        'else',
        optional($.block)
      )),
      'end'
    ),

    try: $ => seq(
      $._expression,
      '?'
    ),

    unary_expression: $ => prec.left(20, seq(
      $.unary_operator,
      $._expression
    )),

    _literals: $ => choice(
      $.string,
      $.number,
      $.float,
      $.char,
      $.boolean,
      $.nil,
      $.self
    ),

    // expression parts

    function_arguments: $ => seq(
      '(',
      commaSep($._expression),
      ')'
    ),

    function_parameters: $ => seq(
      '(',
      commaSep($.identifier),
      ')'
    ),

    shell_command: _ =>
      /(\$\{.*\}|'.*'|".*"|`.*`|[^\}])*/,

// Literals

    binary_operator: _ => choice(
      '+',
      '-',
      '*',
      '/',
      '%',
      'and',
      'or',
      '==',
      '!=',
      '<',
      '>',
      '<=',
      '>=',
      '++'
    ),

    boolean: _ => choice(
      'true',
      'false'
    ),

    char: _ =>
      seq("'", /[^']*/, "'"),

    comment: _ => token(
      seq('#', /(\\(.|\r?\n)|[^\\\n])*/)
    ),

    float: _ =>
      /\d+\.\d+/,

    nil: _ => 'nil',

    number: _ =>
      /\d+/,

    self: _ => 'self',

    string: _ =>
      seq('"', /[^"]*/, '"'),

    unary_operator: _ => choice(
      'not',
      '+',
      '-'
    )

  }

})

function commaSep(rule) {
  return optional(commaSep1(rule))
}

function commaSep1(rule) {
  return seq(
    rule,
    repeat(seq(
      ',',
      rule
    ))
  )
}
