/**
 * @file InitialContext.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef INITIAL_CONTEXT_H_
#define INITIAL_CONTEXT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Service.h"

typedef struct InitialContext InitialContext;

InitialContext* initial_context_create(void);

void initial_context_destroy(InitialContext** initial_context);

Service* initial_context_lookup(InitialContext* initial_context, const char* jndi_name);

#ifdef __cplusplus
}
#endif
#endif  // INITIAL_CONTEXT_H_
