/**
 * @file InitialContext.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "InitialContext.h"

#include <stdio.h>

#include "ctools.h"

struct InitialContext {};

InitialContext* initial_context_create(void) {
    InitialContext* initial_context = (InitialContext*)calloc(1, sizeof(InitialContext));
    return initial_context;
}

void initial_context_destroy(InitialContext** initial_context) {
    if (NULL == initial_context || NULL == *initial_context) return;
    freep((void**)initial_context);
}

Service* initial_context_lookup(InitialContext* initial_context, const char* jndi_name) {
    if (0 == strcasecmp("SERVICE1", jndi_name)) {
        printf("Looking up and creating a new Service1 object\n");
        return service_create_service1();
    } else if (0 == strcasecmp("SERVICE2", jndi_name)) {
        printf("Looking up and creating a new Service2 object\n");
        return service_create_service2();
    }
    return NULL;
}
