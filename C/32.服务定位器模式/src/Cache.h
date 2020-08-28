/**
 * @file Cache.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CACHE_H_
#define CACHE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Service.h"

typedef struct Cache Cache;

Cache* cache_create(void);

void cache_destroy(Cache** cache);

Service* cache_get_service(Cache* cache, const char* service_name);

void cache_add_service(Cache* cache, Service* new_service);

#ifdef __cplusplus
}
#endif
#endif  // CACHE_H_
