/**
 * @file FilterChain.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "FilterChain.h"

#include "ctools.h"

struct FilterChain {
    List* filters;
    Target* target;
};

FilterChain* filter_chain_create(void) {
    FilterChain* filter_chain = (FilterChain*)calloc(1, sizeof(FilterChain));
    if (NULL == filter_chain) return NULL;

    filter_chain->filters = list_create();
    return filter_chain;
}

void filter_chain_destroy(FilterChain** filter_chain) {
    if (NULL == filter_chain || NULL == *filter_chain) return;
    FilterChain* self = *filter_chain;
    list_destroy(self->filters);
    freep((void**)filter_chain);
}

void filter_chain_add_filter(FilterChain* filter_chain, Filter* filter) {
    if (NULL == filter_chain) return;
    list_push_back(filter_chain->filters, list_node_new((int64_t)filter));
}

void filter_chain_execute(FilterChain* filter_chain, const char* request) {
    if (NULL == filter_chain) return;
    ListIterator* it = list_iterator_new(filter_chain->filters, LIST_HEAD);
    ListNode* node;

    while ((node = list_iterator_next(it))) {
        Filter* filter = (Filter*)node->val;
        filter_execute(filter, request);
    }
    list_iterator_destroy(it);

    target_execute(filter_chain->target, request);
}

void filter_chain_set_target(FilterChain* filter_chain, Target* target) {
    if (NULL == filter_chain) return;
    filter_chain->target = target;
}
