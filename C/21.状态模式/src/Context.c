/**
 * @file Context.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Context.h"

#include "ctools.h"

struct Context {
    State* state;
};

Context* context_create(void) {
    Context* context = (Context*)calloc(1, sizeof(Context));
    return context;
}

void context_destroy(Context** context) {
    if (NULL == context || NULL == context) return;
    freep((void**)context);
}

void context_set_state(Context* context, State* state) {
    if (NULL == context) return;
    context->state = state;
}

State* context_get_state(Context* context) {
    if (NULL == context) return NULL;
    return context->state;
}
