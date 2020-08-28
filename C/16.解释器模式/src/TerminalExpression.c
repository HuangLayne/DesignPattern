/**
 * @file TerminalExpression.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ExpressionStruct.h"
#include "ctools.h"

typedef struct {
    const char* data;
} priv_t;

static void init(struct Expression* expression, const char* data) {
    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    priv->data = cstrdup(data);
    expression->priv = priv;
}

static void destroy(struct Expression* expression) {
    if (NULL == expression || NULL == expression->priv) return;
    priv_t* priv = expression->priv;
    freep((void**)&priv->data);
    freep((void**)&expression->priv);
}

static bool interpret(struct Expression* expression, const char* context) {
    if (NULL == expression || NULL == expression->priv) return false;
    priv_t* priv = expression->priv;
    char* result = strcasestr(context, priv->data);
    return (NULL != result);
}

struct Expression* terminal_expression_create(const char* data) {
    struct Expression* expression = (struct Expression*)calloc(1, sizeof(struct Expression));
    if (NULL == expression) return NULL;

    init(expression, data);
    expression->interpret = interpret;
    expression->destroy = destroy;
    return expression;
}
