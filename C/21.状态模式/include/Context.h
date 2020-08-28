/**
 * @file Context.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-10
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "State.h"

Context* context_create(void);
void context_destroy(Context** context);
void context_set_state(Context* context, State* state);
State* context_get_state(Context* context);

#ifdef __cplusplus
}
#endif
#endif  // CONTEXT_H_
