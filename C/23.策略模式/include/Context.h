/**
 * @file Context.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Strategy.h"

typedef struct Context Context;

Context* context_create(Strategy* strategy);

void context_destroy(Context** context);

int context_execute_strategy(Context* context, int num1, int num2);

#ifdef __cplusplus
}
#endif
#endif  // CONTEXT_H_
