/**
 * @file StrategyStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STRATEGY_STRUCT_H_
#define STRATEGY_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Strategy {
    void* priv;

    int (*do_operation)(struct Strategy* strategy, int num1, int num2);
    void (*destroy)(struct Strategy* strategy);
};

#ifdef __cplusplus
}
#endif
#endif  // STRATEGY_STRUCT_H_
