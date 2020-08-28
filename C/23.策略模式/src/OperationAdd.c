/**
 * @file OperationAdd.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Strategy.h"
#include "StrategyStruct.h"
#include "ctools.h"

static int do_operation(struct Strategy* strategy, int num1, int num2) { return num1 + num2; }

Strategy* strategy_create_operation_add(void) {
    Strategy* strategy = (Strategy*)calloc(1, sizeof(Strategy));
    if (NULL == strategy) return NULL;

    strategy->do_operation = do_operation;
    return strategy;
}
