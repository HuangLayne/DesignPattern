/**
 * @file ServiceLocator.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ServiceLocator.h"

#include "Cache.h"
#include "InitialContext.h"
#include "ctools.h"

struct ServiceLocator {
    Cache* cache;
    InitialContext* context;
};

ServiceLocator* service_locator_create(void) {
    ServiceLocator* service_locator = (ServiceLocator*)calloc(1, sizeof(ServiceLocator));
    if (NULL == service_locator) return NULL;

    service_locator->cache = cache_create();
    service_locator->context = initial_context_create();
    return service_locator;
}

void service_locator_destroy(ServiceLocator** service_locator) {
    if (NULL == service_locator || NULL == *service_locator) return;
    ServiceLocator* self = *service_locator;
    cache_destroy(&self->cache);
    initial_context_destroy(&self->context);
    freep((void**)service_locator);
}

Service* service_locator_get_service(ServiceLocator* service_locator, const char* jndi_name) {
    if (NULL == service_locator) return NULL;
    Service* service = cache_get_service(service_locator->cache, jndi_name);
    if (NULL != service) return service;

    Service* service1 = initial_context_lookup(service_locator->context, jndi_name);
    cache_add_service(service_locator->cache, service1);
    return service1;
}
