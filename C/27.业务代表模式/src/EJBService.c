/**
 * @file EJBService.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "BusinessServiceStruct.h"
#include "ctools.h"

static void do_processing(struct BusinessService* business_service) {
    printf("Processing task by invoking EJB Service\n");
}

struct BusinessService* business_service_create_ejbservice(void) {
    struct BusinessService* business_service = (struct BusinessService*)calloc(1, sizeof(struct BusinessService));
    if (NULL == business_service) return NULL;

    business_service->do_processing = do_processing;
    return business_service;
}
