module.exports = grammar({
  name: "Inform6",
  rules: {

    source_file: ($) => repeat($._directive),

    word: $ => $.identifier,

    _directive: ($) => choice(
      $.comment,
      $.constant,
      $.global,
      $.array,
      $.routine,
      $.object
    ),

    _statement: ($) => choice(
      $.comment,
      $.print,
      $.new_line,
      $.spaces,
      $.box,
      $.routine_message,
      $.local_var_decl,
      $.return,
      $.conditional,
      $._loop,
      $.increment,
      $.decrement,
      $.break,
      $.move
    ),

    _loop: ($) => choice(
      $.for_loop,
      $.while_loop,
      $.do_loop,
      $.object_loop
    ),

    conditional: ($) => choice(
      $._if,
      $._switch
    ),

    _expression: ($) => choice(
      $.identifier,
      $.property_access,
      $.number,
      $.boolean,
      $._string,
      $.binary_expression,
      $.unary_expression,
      $.rule_expression
    ),


    // Statement Rules
    new_line: ($) => seq("new_line", ";"),
    spaces: ($) => seq("spaces", $.number, ";"),
    box: ($) => seq("box", $.string_double_quoted, optional(repeat(seq(',', $.string_double_quoted))), ";"),
    print: ($) => seq(choice("print", "print_ret"), repeat(seq($._expression, ",")), $._expression, ";"),
    routine_message: ($) => seq($.identifier, "(", repeat(seq($._expression, ",")), optional($._expression), ")", ";"),
    local_var_decl: ($) => seq($.identifier, "=", $._expression, ";"),
    return: ($) => choice(
      seq("return", optional($._expression), ";"),
      seq("rtrue", ";"),
      seq("rfalse", ";"),
      seq($.string_double_quoted, ";"),
    ),
    increment: ($) => seq($.identifier, "++", ";"),
    decrement: ($) => seq($.identifier, "--", ";"),
    break: ($) => seq("break", ";"),
    move: ($) => seq("move", $.identifier, "to", $.identifier, ";"),

    // Conditional Rules
    _if: ($) => prec.left(seq("if",
      "(", $._expression, ")",
      choice(
        seq("{", repeat($._statement), "}"),
        seq($._statement)
      ),
      optional(
        choice(
          seq("else", $._statement),
          seq("else", "{", repeat($._statement), "}")
        )
      )
    )),

    _switch: ($) => seq("switch", "(", $._expression, ")", "{",
      repeat($.case),
      "}"
    ),

    case: ($) => seq($._expression, repeat(seq(",", $._expression)), ":", $._statement),

    // Loop Rules
    for_loop: ($) => seq(
      'for', '(', optional(seq($.identifier, '=', $._expression)), ':', optional($._expression), ':', optional($._expression), ')',
      choice($._statement, seq('{', repeat($._statement), '}')
      )),
    while_loop: ($) => seq(
      'while', '(', $._expression, ')', choice($._statement, seq('{', repeat($._statement), '}'))
    ),
    do_loop: ($) => seq('do', choice($._statement, seq('{', repeat($._statement), '}')), 'until', '(', $._expression, ')', ';'),
    object_loop: ($) => seq('objectloop', '(', $._expression, ')', choice($._statement, seq('{', repeat($._statement), '}'))),

    // Misc Rules
    comment: ($) => /!.*\n/,
    function_sig: ($) => choice(";", seq(repeat1($.identifier), ";")),

    // Directive Rules
    constant: ($) => seq("Constant", $.identifier, optional(seq("=", $._expression)), ";"),
    global: ($) => seq("Global", $.identifier, optional(seq("=", $._expression)), ";"),
    array: ($) => seq("Array", $.identifier, choice("-->", "table"), $._expression, ";"),
    routine: ($) => seq("[", $.function_sig, repeat($._statement), "]", ";"),

    object: ($) => seq("Object", repeat('->'), optional($.identifier), optional($._string), optional($.identifier), optional(
      repeat(
        choice(
          seq(choice("with", "private"), $._object_data, repeat(seq(",", $._object_data))),
          seq(choice("has", "class"), repeat1($.identifier)),
        ))), ";"),

    embedded_routine: ($) => seq('[;', repeat($._statement), ']'),
    _object_data: ($) => seq($.identifier, optional(choice($._data_list, $.embedded_routine))),
    _data_list: ($) => seq($._expression, repeat($._expression)),


    // Expression rules
    property_access: ($) => prec.left(4, seq($.identifier, '.', $.identifier)),
    binary_expression: ($) => prec.left(1, seq($._expression, prec(2, $.operator), $._expression)),
    unary_expression: ($) => prec.left(3, choice(seq(choice('-', '++', '--'), $._expression), seq($._expression, choice('--', '++')))),
    rule_expression: ($) => seq('(', $.identifier, ')', $._expression),

    _string: ($) => choice(
      $.string_single_quoted,
      $.string_double_quoted
    ),

    // Literals
    operator: ($) => choice('+', '-', '/', '*', '%', '<', '<=', '>=', '==', '~=', 'or', 'has', 'hasnt', '&&', '||', '~~', 'ofclass', 'provides'),
    boolean: ($) => choice("true", "false"),
    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
    number: ($) => choice(/\d+/, /\$[0-9a-fA-F]+/, /\$\$(0|1)+/),
    string_single_quoted: ($) => seq("'", /[^\"\']*/, "'"),
    string_double_quoted: ($) => seq('"', /[^\"\']*/, '"')
  },
});
