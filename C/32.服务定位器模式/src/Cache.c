/**
 * @file Cache.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Cache.h"

#include <stdio.h>

#include "ctools.h"

struct Cache {
    List* services;
};

Cache* cache_create(void) {
    Cache* cache = (Cache*)calloc(1, sizeof(Cache));
    if (NULL == cache) return NULL;

    cache->services = list_create();
    cache->services->free_func = (void (*)(int64_t))service_free_func;
    return cache;
}

void cache_destroy(Cache** cache) {
    if (NULL == cache || NULL == *cache) return;
    Cache* self = *cache;
    list_destroy(self->services);
    freep((void**)cache);
}

Service* cache_get_service(Cache* cache, const char* service_name) {
    if (NULL == cache || NULL == cache->services) return NULL;
    ListIterator* it = list_iterator_new(cache->services, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        Service* service = (Service*)node->val;
        if (0 == strcasecmp(service_name, service_get_name(service))) {
            printf("Returning cached  %s object\n", service_name);
            list_iterator_destroy(it);
            return service;
        }
    }
    list_iterator_destroy(it);
    return NULL;
}

void cache_add_service(Cache* cache, Service* new_service) {
    if (NULL == cache || NULL == cache->services) return;
    bool exists = false;
    ListIterator* it = list_iterator_new(cache->services, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        Service* service = (Service*)node->val;
        if (0 == strcasecmp(service_get_name(new_service), service_get_name(service))) {
            exists = true;
        }
    }
    list_iterator_destroy(it);

    if (!exists) list_push_back(cache->services, list_node_new((int64_t)new_service));
}
