/**
 * @file Service1.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ServiceStruct.h"
#include "ctools.h"

static const char* get_name(struct Service* service) { return "Service1"; }

static void excute(struct Service* service) { printf("Executing Service1\n"); }

struct Service* service_create_service1(void) {
    struct Service* service = (struct Service*)calloc(1, sizeof(struct Service));
    if (NULL == service) return NULL;

    service->excute = excute;
    service->get_name = get_name;
    return service;
}
