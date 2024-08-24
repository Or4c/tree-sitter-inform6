module.exports = grammar({
  name: "inform6",

  conflicts: ($) => [
    [$.case, $.case],
    [$.array, $.binary_expression],
    [$._object_header, $._object_header],
    [$._data_list_value, $._data_list_value]
  ],

  extras: ($) => [/\p{White_Space}*/u, $.comment],

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
      $.replace,
      $.serial,
      $.release
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
      $.compiler_directive,
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
      $.cast,
      prec(50, seq('(', $._expression, ')')),
      seq('~', $.identifier),
      $.property_access,
      $.identifier,
      $.array_access,
      $.number,
      $.boolean,
      $._string,
      $.binary_expression,
      $.unary_expression,
      $.nothing,
      $.routine_call
    )),

    // Statement Rules
    new_line: ($) => seq("new_line", ";"),
    spaces: ($) => seq("spaces", $.number, ";"),
    box: ($) => seq("box", $.string_double_quoted, optional(repeat(seq(',', $.string_double_quoted))), ";"),
    print: ($) => seq(choice("print", "print_ret"), optional(seq('(', $.identifier, ')')), repeat(seq($._expression, ",")), $._expression, ";"),
    _routine_statement: ($) => seq($.routine_call, ";"),
    local_var_decl: ($) => seq(prec.left(5, seq(choice($.identifier, $.property_access), '=')), $._expression, ";"),
    return: ($) => choice(
      seq("return", optional($._expression), ";"),
      seq("rtrue", ";"),
      seq("rfalse", ";"),
      seq($.string_double_quoted, repeat(seq(',', $._expression)), ";"),
    ),
    increment: ($) => seq(choice($.identifier, $.property_access), "++", ";"),
    decrement: ($) => seq(choice($.identifier, $.property_access), "--", ";"),
    break: ($) => seq("break", ";"),
    give: ($) => seq("give", $.identifier, repeat1(seq(optional('~'), $.identifier)), ";"),
    action: ($) => choice(
      seq("<", repeat1($.identifier), '>', ";"),
      seq("<<", repeat1($.identifier), '>>', ";")
    ),

    tree_statement: ($) => choice(
      seq("move", $._expression, "to", $._expression, ";"),
      seq("remove", $._expression, ";"),
    ),

    // Conditional Rules
    _if: ($) => prec.left(10, seq("if",
      "(", $._expression, ")",
      choice(
        $.code_block,
        $._statement
      ),
      optional(
        choice(
          seq("else", $._statement),
          seq("else", $.code_block)
        )
      )
    )),

    _switch: ($) => seq("switch", "(", $._expression, ")", "{",
      repeat($.case),
      "}"
    ),

    case: ($) => seq($.switch_value, repeat(seq(',', $.switch_value)), ':', repeat1($._statement)),

    // Loop Rules
    for_loop: ($) => seq(
      'for', '(', optional(seq($.identifier, '=', $._expression)), ':', optional($._expression), ':', optional($._expression), ')',
      choice($._statement, $.code_block)),
    while_loop: ($) => seq(
      'while', '(', $._expression, ')', choice($._statement, $.code_block)
    ),
    do_loop: ($) => seq('do', choice($._statement, $.code_block), 'until', '(', $._expression, ')', ';'),
    object_loop: ($) => seq('objectloop', '(', $._expression, ')', choice($._statement, $.code_block)),

    // Misc Rules
    comment: ($) => /!.*\n/,
    function_sig: ($) => choice(";", seq(repeat1($.identifier), ";")),
    function_block: ($) => repeat1($._statement),
    code_block: ($) => seq("{", repeat($._statement), "}"),

    // Directive Rules
    constant: ($) => seq("Constant", $.identifier, optional(seq(optional("="), $._expression)), ";"),
    serial: ($) => seq("Serial", $._expression, ";"),
    release: ($) => seq("Release", $._expression, ";"),
    global: ($) => seq("Global", $.identifier, optional(seq("=", $._expression)), ";"),
    array: ($) => seq("Array", $.identifier, choice("->", "-->", "table", "string", "buffer"), repeat1($._expression), ";"),
    routine: ($) => seq("[", $.function_sig, optional($.function_block), "]", ";"),
    attribute: ($) => seq("Attribute", $.identifier, ";"),
    include: ($) => seq("Include", $.string_double_quoted, ";"),
    grammar: ($) => seq(
      choice("Verb", "Extend"),
      $._string,
      repeat(
        choice(
          $._string,
          $.identifier,
        )), repeat1($.grammar_clause), ";"),

    grammar_clause: ($) => seq(
      '*',
      repeat(
        choice(
          $._string,
          seq($._string, repeat1(seq('/', $._string))),
          $.identifier,
          seq(choice('noun', 'scope'), optional(seq('=', $.identifier)))
        )
      ),
      '->',
      $.identifier
    ),

    replace: ($) => seq("Replace", $.identifier, ";"),
    compiler_message: ($) => seq("Message", optional(choice("error", "warning", "fatalerror")), $.string_double_quoted, ";"),
    compiler_directive: ($) => seq(
      choice(/#Ifdef/i, /#Ifndef/i, /#Iftrue/i, /#Iffalse/i, /#Ifnot/i, /#Endif/i),
      optional($._expression), ";"),

    // Object Rules

    object: ($) => seq(
      $._object_header,
      optional($.class_assignment),
      optional($.object_body),
      ";"),

    _object_header: ($) => seq(
      optional("Metaclass"),
      choice(
        seq(field('class_name', $.identifier), repeat('->'), optional(field('label', $.identifier)), optional(field('sdec', $._string))),
        seq(field('class_name', $.identifier), optional(field('label', $.identifier)), optional(field('sdec', $._string)), optional(field('label', $.identifier))),
        seq(field('class_name', $.identifier), optional(seq('(', $.number, ')')), optional($.identifier))
      )
    ),

    embedded_routine: ($) => seq("[", $.function_sig, repeat(
      choice(
        seq($.switch_block, $._statement),
        seq($.switch_block, ';'),
        $._statement,
      )
    ), "]"),
    switch_block: ($) => seq($.identifier, repeat(seq(',', $.identifier)), ":"),
    prop_mod: ($) => choice("with", "private", "has"),

    object_body: ($) => seq(
      $.prop_mod, $._object_data, repeat(seq(',', choice(seq($.prop_mod, $._object_data), $._object_data)))
    ),
    _object_data: ($) => seq(field('data_id', repeat1(seq(optional('~'), $.identifier))), optional(choice($._data_list_value, $._data_list, $.embedded_routine))),
    _data_list: ($) => seq($._data_list_value, repeat1($._data_list_value)),
    _data_list_value: ($) => choice(
      $.identifier,
      $.number,
      $.boolean,
      $._string,
      $.prop_mod
    ),

    class_assignment: ($) => seq('class', $.identifier),

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
              seq($.identifier, $.routine_message)
            ),
            choice('.', '::'))),
        choice(
          $.identifier,
          $.array_access,
          seq(
            $.identifier, $.routine_message),
        )
      )
    ),

    array_access: ($) => prec.left(choice(
      seq($._expression, choice('-->', '->'), $._expression),
      seq('#', $.identifier)
    )),

    cast: ($) => prec(1000, seq(prec(100, seq('(', $.identifier, ')')), $._expression)),
    routine_call: ($) => seq(choice($.identifier, $.property_access), $.routine_message),
    routine_message: ($) => prec.left(seq('(', repeat(seq($._expression, ",")), optional($._expression), ")")),
    binary_expression: ($) => prec.left(seq($._expression, $.operator, $._expression)),
    unary_expression: ($) => prec.left(4, choice(seq(choice('-', '++', '--'), $._expression), seq($._expression, choice('--', '++')))),

    _string: ($) => choice(
      $.string_single_quoted,
      $.string_double_quoted
    ),

    switch_value: ($) => choice(
      $.number,
      $._string,
      $.boolean,
      $.nothing,
      $.identifier,
      $.property_access,
      'default',
      seq($.number, 'to', $.number)
    ),

    // Literals
    nothing: ($) => "nothing",
    operator: ($) => choice('+', '-', '/', '*', '%', '<', '>', '<=', '>=', '==', '~=', 'or', 'has', 'hasnt', '&&', '||', '~~', 'ofclass', 'provides', 'in', 'notin'),
    boolean: ($) => choice("true", "false"),
    identifier: ($) => /(##)?(&)?[a-zA-Z_]+[a-zA-Z0-9_]*/,
    number: ($) => choice(/\d+/, /\$[0-9a-fA-F]+/, /\$\$(0|1)+/),
    string_single_quoted: ($) => seq("'", /[^\']*/, "'"),
    string_double_quoted: ($) => seq('"', /[^\"]*/, '"')
  },
});
