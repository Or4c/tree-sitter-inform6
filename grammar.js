module.exports = grammar({
  name: "inform6",
  rules: {

    source_file: ($) => repeat($._directive),

    word: $ => $.identifier,

    _directive: ($) => choice(
      $.comment,
      $.constant,
      $.global,
      $.array,
      $.routine,
      $.object,
      $.attribute,
      $.include,
      $.grammar,
      $.compiler_directive,
      $.replace
    ),

    _statement: ($) => choice(
      $._routine_statement,
      $._loop,
      $.comment,
      $.print,
      $.new_line,
      $.spaces,
      $.box,
      $.local_var_decl,
      $.return,
      $.conditional,
      $.increment,
      $.decrement,
      $.break,
      $.tree_statement,
      $.give,
      $.action,
      $.compiler_directive
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

    _expression: ($) => prec.left(choice(
      $.identifier,
      $.property_access,
      $.array_access,
      $.number,
      $.boolean,
      $._string,
      $.binary_expression,
      $.unary_expression,
      $.nothing
    )),


    // Statement Rules
    new_line: ($) => seq("new_line", ";"),
    spaces: ($) => seq("spaces", $.number, ";"),
    box: ($) => seq("box", $.string_double_quoted, optional(repeat(seq(',', $.string_double_quoted))), ";"),
    print: ($) => seq(choice("print", "print_ret"), optional(seq('(', $.identifier, ')')), repeat(seq($._expression, ",")), $._expression, ";"),
    _routine_statement: ($) => seq(choice($.identifier, $.property_access), $.routine_message, ";"),
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
    give: ($) => seq("give", $.identifier, optional('~'), $.identifier, ";"),
    action: ($) => choice(
      seq("<", repeat1($.identifier), '>', ";"),
      seq("<<", repeat1($.identifier), '>>', ";")
    ),

    routine_message: ($) => prec.left(seq('(', repeat(seq($._expression, ",")), optional($._expression), ")")),

    tree_statement: ($) => choice(
      seq("move", $.identifier, "to", $.identifier, ";"),
      seq("remove", $.identifier, ";"),
    ),

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
    attribute: ($) => seq("Attribute", $.identifier, ";"),
    include: ($) => seq("Include", $.string_double_quoted, ";"),
    grammar: ($) => seq(choice("Verb", "Extend"), $.string_single_quoted, repeat($.string_single_quoted), repeat1($.grammar_clause), ";"),
    replace: ($) => seq("Replace", $.identifier, ";"),
    compiler_message: ($) => seq("Message", optional(choice("error", "warning", "fatalerror")), $.string_double_quoted, ";"),
    compiler_directive: ($) => seq("#", choice(
      "ifdef", "ifndef", "iftrue", "iffalse", "ifnot", "Endif",
    ), optional($._expression), ";"),


    grammar_clause: ($) => seq(
      '*',
      repeat(
        choice(
          $.string_single_quoted,
          seq($.string_single_quoted, repeat1(seq('/', $.string_single_quoted))),
          $.identifier,
          seq(choice('noun', 'scope'), '=', $.identifier)
        )
      ),
      '->',
      $.identifier
    ),

    object: ($) => seq(
      optional("Metaclass"),
      choice(seq("Object", optional($.identifier)), seq("Class", optional(seq('(', $.number, ')')), optional($.identifier))),
      repeat('->'),
      optional($.identifier),
      optional($._string),
      optional($.identifier),
      optional(seq(
        $._object_member,
        repeat($._object_member))),
      ";"),

    _object_data: ($) => seq($.identifier, optional(choice($._data_list, $.embedded_routine))),
    _data_list: ($) => seq($._expression, repeat($._expression)),
    embedded_routine: ($) => seq("[", $.function_sig, repeat(
      choice(
        seq($.switch_block, $._statement),
        seq($.switch_block, ';'),
        $._statement,
      )
    ), "]"),
    switch_block: ($) => seq($.identifier, repeat(seq(',', $.identifier)), ":"),

    _object_member: ($) => prec.right(choice(
      seq(choice("with", "private"), $._object_data, repeat(seq(",", $._object_data))),
      seq(choice("has", "class"), repeat1($.identifier)),
    )),

    // Expression rules
    property_access: ($) => prec.left(1,
      seq(
        choice(
          $.identifier,
          seq(
            $.identifier, $.routine_message)
        ),
        choice('.', '::'),
        repeat(
          seq(
            choice(
              $.identifier,
              seq($.identifier, $.routine_message)),
            choice('.', '::'))),
        choice(
          $.identifier,
          $.array_access,
          seq(
            $.identifier, $.routine_message)))
    ),

    array_access: ($) => choice(
      seq(optional('&'), $.identifier, '-->', $.number),
      seq('#', $.identifier)
    ),

    binary_expression: ($) => prec.left(1, seq($._expression, prec(2, $.operator), $._expression)),
    unary_expression: ($) => prec.left(3, choice(seq(choice('-', '++', '--'), $._expression), seq($._expression, choice('--', '++')))),

    _string: ($) => choice(
      $.string_single_quoted,
      $.string_double_quoted
    ),

    // Literals
    nothing: ($) => "nothing",
    operator: ($) => choice('+', '-', '/', '*', '%', '<', '<=', '>=', '==', '~=', 'or', 'has', 'hasnt', '&&', '||', '~~', 'ofclass', 'provides'),
    boolean: ($) => choice("true", "false"),
    identifier: ($) => /(##)?[a-zA-Z_]+[a-zA-Z0-9_]*/,
    number: ($) => choice(/\d+/, /\$[0-9a-fA-F]+/, /\$\$(0|1)+/),
    string_single_quoted: ($) => seq("'", /[^\"\']*/, "'"),
    string_double_quoted: ($) => seq('"', /[^\"\']*/, '"')
  },
});
