/**
 * @file StrategyPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Context.h"

int main(int argc, char const* argv[]) {
    Strategy* operation_add = strategy_create_operation_add();
    Context* context = context_create(operation_add);
    printf("10 + 5 = %d\n", context_execute_strategy(context, 10, 5));
    strategy_destroy(&operation_add);
    context_destroy(&context);

    Strategy* operation_subtract = strategy_create_operation_subtract();
    context = context_create(operation_subtract);
    printf("10 - 5 = %d\n", context_execute_strategy(context, 10, 5));
    strategy_destroy(&operation_subtract);
    context_destroy(&context);

    Strategy* operation_multiply = strategy_create_operation_multiply();
    context = context_create(operation_multiply);
    printf("10 * 5 = %d\n", context_execute_strategy(context, 10, 5));
    strategy_destroy(&operation_multiply);
    context_destroy(&context);

    return 0;
}
