module.exports = grammar({
  name: "Inform6",
  rules: {

    source_file: ($) => repeat($._directive),

    _directive: ($) => choice(
      $.comment,
      $.constant,
      $.global,
      $.array,
      $.routine
    ),

    _statement: ($) => choice(
      $.comment,
      $.print
    ),

    // Statement Rules
    print: ($) => seq("print", $._expression, ";"),

    comment: ($) => /!.*\n/,

    //TODO: fix this!
    function_sig: ($) => seq(optional(repeat1($.identifier)), ";"),

    // Directive Rules
    constant: ($) => seq("Constant", $.identifier, optional(seq("=", $._expression)), ";"),
    global: ($) => seq("Global", $.identifier, optional(seq("=", $._expression)), ";"),
    array: ($) => seq("Array", $.identifier, choice("-->", "table"), $._expression, ";"),
    routine: ($) => seq("[", $.function_sig, repeat(optional($._statement)), "]", ";"),

    _expression: ($) => choice(
      $.identifier,
      $.number,
      $.string
    ),

    // Expression rules

    // Literals
    identifier: ($) => /[a-zA-Z_]+/,
    number: ($) => /\d+/,
    string: ($) => choice(seq("\"", /.*/, "\""), seq("\'", /.*/, "\'"))
  },
});
