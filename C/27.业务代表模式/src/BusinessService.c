/**
 * @file BusinessService.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "BusinessService.h"

#include "BusinessServiceStruct.h"
#include "ctools.h"

void business_service_do_processing(BusinessService* business_service) {
    if (NULL == business_service) return;
    if (NULL != business_service->do_processing) {
        business_service->do_processing(business_service);
    }
}

void business_service_destroy(BusinessService** business_service) {
    if (NULL == business_service || NULL == *business_service) return;
    if (NULL != (*business_service)->destroy) {
        (*business_service)->destroy(*business_service);
    }
    freep((void**)business_service);
}
