/**
 * @file Strategy.c
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

int strategy_do_operation(Strategy* strategy, int num1, int num2) {
    if (NULL == strategy || NULL == strategy->do_operation) return INT32_MIN;
    return strategy->do_operation(strategy, num1, num2);
}

void strategy_destroy(Strategy** strategy) {
    if (NULL == strategy || NULL == *strategy) return;
    if (NULL != (*strategy)->destroy) (*strategy)->destroy(*strategy);
    freep((void**)strategy);
}
