/**
 * @file Expression.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#include "Expression.h"

#include "ExpressionStruct.h"
#include "ctools.h"

void expression_destroy(Expression** expression) {
    if (NULL == expression || NULL == *expression) return;
    if (NULL != (*expression)->destroy) {
        (*expression)->destroy(*expression);
    }
    freep((void**)expression);
}

bool expression_interpret(Expression* expression, const char* context) {
    if (NULL == expression || NULL == expression->interpret) return false;

    return expression->interpret(expression, context);
}
