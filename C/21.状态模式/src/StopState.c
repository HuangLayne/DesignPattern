/**
 * @file StropState.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Context.h"
#include "StateStruct.h"
#include "ctools.h"

static void do_action(struct State* state, struct Context* context) {
    printf("Player is in stop state\n");
    context_set_state(context, state);
}

static const char* to_string(struct State* state) { return "Stop State"; }

struct State* stop_state_create(void) {
    struct State* state = (struct State*)calloc(1, sizeof(struct State));
    if (NULL == state) return NULL;

    state->do_action = do_action;
    state->to_string = to_string;
    return state;
}
