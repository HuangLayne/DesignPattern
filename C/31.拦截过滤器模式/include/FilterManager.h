/**
 * @file FilterManager.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef FILTER_MANAGER_H_
#define FILTER_MANAGER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Filter.h"
#include "Target.h"

typedef struct FilterManager FilterManager;

FilterManager* filter_manager_create(Target* target);

void filter_manager_destroy(FilterManager** filter_manager);

void filter_manager_set_filter(FilterManager* filter_manager, Filter* filter);

void filter_manager_filter_request(FilterManager* filter_manager, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // FILTER_MANAGER_H_
