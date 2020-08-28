/**
 * @file InterpreterPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>

#include "Expression.h"

int main(int argc, char const* argv[]) {
    Expression* robert = terminal_expression_create("Robert");
    Expression* john = terminal_expression_create("John");
    Expression* julie = terminal_expression_create("Julie");
    Expression* married = terminal_expression_create("Married");

    Expression* is_male = or_expression_create(robert, john);
    Expression* is_married_woman = or_expression_create(julie, married);

    printf("John is male? %s\n", expression_interpret(is_male, "John") ? "true" : "false");
    printf("Julie is a married women?  %s\n",
           expression_interpret(is_married_woman, "Married Julie") ? "true" : "false");

    expression_destroy(&robert);
    expression_destroy(&john);
    expression_destroy(&julie);
    expression_destroy(&married);
    expression_destroy(&is_male);
    expression_destroy(&is_married_woman);

    return 0;
}
