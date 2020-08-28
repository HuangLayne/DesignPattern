/**
 * @file StatePatternDemo.c
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

int main(int argc, char const* argv[]) {
    Context* context = context_create();

    State* start_state = start_state_create();
    state_do_action(start_state, context);
    printf("%s\n", state_to_string(context_get_state(context)));

    State* stop_state = stop_state_create();
    state_do_action(stop_state, context);
    printf("%s\n", state_to_string(context_get_state(context)));

    context_destroy(&context);
    state_destroy(&start_state);
    state_destroy(&stop_state);
    return 0;
}
