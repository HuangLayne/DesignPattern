/**
 * @file Strategy.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STRATEGY_H_
#define STRATEGY_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Strategy Strategy;

Strategy* strategy_create_operation_add(void);

Strategy* strategy_create_operation_subtract(void);

Strategy* strategy_create_operation_multiply(void);

int strategy_do_operation(Strategy* strategy, int num1, int num2);

void strategy_destroy(Strategy** strategy);

#ifdef __cplusplus
}
#endif
#endif  // STRATEGY_H_
