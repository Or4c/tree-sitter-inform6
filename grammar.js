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
      $.routine
    ),

    _statement: ($) => choice(
      $.comment,
      $.print,
      $.routine_message,
      $.local_var_decl,
      $.return,
      $.conditional,
      $.loop
    ),

    // Statement Rules
    print: ($) => seq("print", repeat(seq($._expression, ",")), $._expression, ";"),
    routine_message: ($) => seq($.identifier, "(", repeat(seq($._expression, ",")), optional($._expression), ")", ";"),
    local_var_decl: ($) => seq($.identifier, "=", $._expression, ";"),
    return: ($) => choice(
      seq("return", optional($._expression), ";"),
      seq("rtrue", ";"),
      seq("rfalse", ";"),
      seq($.string_double_quoted, ";"),
    ),

    conditional: ($) => choice(
      $._if,
      $._switch
    ),

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

    // TODO: Finish loops
    loop: ($) => "TODO",

    // Misc
    comment: ($) => /!.*\n/,
    function_sig: ($) => choice(";", seq(repeat1($.identifier), ";")),

    // Directive Rules
    constant: ($) => seq("Constant", $.identifier, optional(seq("=", $._expression)), ";"),
    global: ($) => seq("Global", $.identifier, optional(seq("=", $._expression)), ";"),
    array: ($) => seq("Array", $.identifier, choice("-->", "table"), $._expression, ";"),
    routine: ($) => seq("[", $.function_sig, repeat($._statement), "]", ";"),

    _expression: ($) => choice(
      $.identifier,
      $.number,
      $.boolean,
      $.string_single_quoted,
      $.string_double_quoted,
      $.binary_expression,
      $.unary_expression
    ),

    // Expression rules

    binary_expression: ($) => prec.left(1, seq($._expression, prec(2, $.operator), $._expression)),
    unary_expression: ($) => prec.left(3, seq(choice('-', '++', '--'), $._expression, optional(choice('--', '++')))),


    // Literals
    operator: ($) => choice('\+', '\-', '\/', '\*', '\%', '\<', '\<\=', '\>\=', '\=\=', '\!\=', 'or', 'has', 'hasnt'),
    boolean: ($) => choice("true", "false"),
    identifier: ($) => /[a-zA-Z_]+[a-zA-Z0-9_]*/,
    number: ($) => choice(/\d+/, /\$[0-9a-fA-F]+/, /\$\$(0|1)+/),
    string_single_quoted: ($) => seq("'", /[^\"\']*/, "'"),
    string_double_quoted: ($) => seq('"', /[^\"\']*/, '"')
  },
});
