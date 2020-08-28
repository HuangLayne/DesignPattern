/**
 * @file Context.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Context.h"

#include "ctools.h"

struct Context {
    Strategy* strategy;
};

Context* context_create(Strategy* strategy) {
    Context* context = (Context*)calloc(1, sizeof(Context));
    if (NULL == context) return NULL;
    context->strategy = strategy;
    return context;
}

void context_destroy(Context** context) {
    if (NULL == context || NULL == *context) return;
    freep((void**)context);
}

int context_execute_strategy(Context* context, int num1, int num2) {
    if (NULL == context || NULL == context->strategy) return INT32_MIN;
    return strategy_do_operation(context->strategy, num1, num2);
}
