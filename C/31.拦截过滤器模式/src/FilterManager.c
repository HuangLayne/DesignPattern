/**
 * @file FilterManager.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "FilterManager.h"

#include "FilterChain.h"
#include "ctools.h"

struct FilterManager {
    FilterChain* filter_chain;
};

FilterManager* filter_manager_create(Target* target) {
    FilterManager* filter_manager = (FilterManager*)calloc(1, sizeof(FilterManager));
    if (NULL == filter_manager) return NULL;

    filter_manager->filter_chain = filter_chain_create();
    filter_chain_set_target(filter_manager->filter_chain, target);
    return filter_manager;
}

void filter_manager_destroy(FilterManager** filter_manager) {
    if (NULL == filter_manager || NULL == *filter_manager) return;
    FilterManager* self = *filter_manager;
    filter_chain_destroy(&self->filter_chain);
    freep((void**)filter_manager);
}

void filter_manager_set_filter(FilterManager* filter_manager, Filter* filter) {
    if (NULL == filter_manager) return;
    filter_chain_add_filter(filter_manager->filter_chain, filter);
}

void filter_manager_filter_request(FilterManager* filter_manager, const char* request) {
    if (NULL == filter_manager) return;
    filter_chain_execute(filter_manager->filter_chain, request);
}
