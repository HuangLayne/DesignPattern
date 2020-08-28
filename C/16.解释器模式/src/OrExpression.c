/**
 * @file OrExpression.c
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
    struct Expression* expression1;
    struct Expression* expression2;
} priv_t;

static void init_with_expressions(struct Expression* expression, struct Expression* expression1,
                                  struct Expression* expression2) {
    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    priv->expression1 = expression1;
    priv->expression2 = expression2;
    expression->priv = priv;
}

static void destroy(struct Expression* expression) {
    if (NULL == expression || NULL == expression->priv) return;
    freep((void**)&expression->priv);
}

static bool interpret(struct Expression* expression, const char* context) {
    if (NULL == expression || NULL == expression->priv) return false;
    priv_t* priv = (priv_t*)expression->priv;
    if (NULL == priv->expression1 || NULL == priv->expression2) return false;
    if (NULL == priv->expression1->interpret || NULL == priv->expression2->interpret) {
        return false;
    }

    return priv->expression1->interpret(priv->expression1, context) ||
           priv->expression2->interpret(priv->expression2, context);
}

struct Expression* or_expression_create(struct Expression* expression1, struct Expression* expression2) {
    struct Expression* expression = (struct Expression*)calloc(1, sizeof(struct Expression));
    if (NULL == expression) return NULL;

    init_with_expressions(expression, expression1, expression2);
    expression->interpret = interpret;
    expression->destroy = destroy;
    return expression;
}
