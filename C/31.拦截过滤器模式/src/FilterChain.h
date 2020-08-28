/**
 * @file FilterChain.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef FILTER_CHAIN_H_
#define FILTER_CHAIN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Filter.h"
#include "Target.h"

typedef struct FilterChain FilterChain;

FilterChain* filter_chain_create(void);

void filter_chain_destroy(FilterChain** filter_chain);

void filter_chain_add_filter(FilterChain* filter_chain, Filter* filter);

void filter_chain_execute(FilterChain* filter_chain, const char* request);

void filter_chain_set_target(FilterChain* filter_chain, Target* target);

#ifdef __cplusplus
}
#endif
#endif  // FILTER_CHAIN_H_
