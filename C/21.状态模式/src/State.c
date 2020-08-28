/**
 * @file State.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Context.h"
#include "StateStruct.h"
#include "ctools.h"

void state_do_action(State* state, Context* context) {
    if (NULL == state || NULL == state->do_action) return;
    state->do_action(state, context);
}

const char* state_to_string(State* state) {
    if (NULL == state || NULL == state->to_string) return NULL;
    return state->to_string(state);
}

void state_destroy(State** state) {
    if (NULL == state || NULL == *state) return;
    if (NULL != (*state)->destroy) (*state)->destroy(*state);
    freep((void**)state);
}
