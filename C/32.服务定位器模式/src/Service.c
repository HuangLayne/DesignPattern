/**
 * @file Service.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Service.h"

#include "ServiceStruct.h"
#include "ctools.h"

void service_destroy(Service** service) {
    if (NULL == service || NULL == *service) return;
    service_free_func(*service);
    *service = NULL;
}

void service_free_func(Service* service) {
    if (NULL == service) return;
    if (NULL != service->destroy) service->destroy(service);
    free(service);
}

const char* service_get_name(Service* service) {
    if (NULL == service || NULL == service->get_name) return NULL;
    return service->get_name(service);
}

void serveice_execute(Service* service) {
    if (NULL == service || NULL == service->excute) return;
    service->excute(service);
}
