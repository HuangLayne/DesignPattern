/**
 * @file BusinessDelegate.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "BusinessDelegate.h"

#include "BusinessLookUp.h"
#include "BusinessService.h"
#include "ctools.h"

struct BusinessDelegate {
    const char* service_type;
    BusinessLookUp* lookup_service;
};

BusinessDelegate* business_delegate_create(void) {
    BusinessDelegate* business_delegate = (BusinessDelegate*)calloc(1, sizeof(BusinessDelegate));
    if (NULL == business_delegate) return NULL;

    business_delegate->lookup_service = business_look_up_create();
    return business_delegate;
}

void business_delegate_destroy(BusinessDelegate** business_delegate) {
    if (NULL == business_delegate || NULL == *business_delegate) return;
    business_look_up_destroy(&(*business_delegate)->lookup_service);
    freep((void**)&(*business_delegate)->service_type);
    freep((void**)business_delegate);
}

void business_delegate_set_service_type(BusinessDelegate* business_delegate, const char* service_type) {
    if (NULL == business_delegate) return;
    freep((void**)&business_delegate->service_type);
    business_delegate->service_type = cstrdup(service_type);
}

void business_delegate_do_task(BusinessDelegate* business_delegate) {
    if (NULL == business_delegate) return;
    BusinessService* business_service =
        business_look_up_get_business_service(business_delegate->lookup_service, business_delegate->service_type);
    business_service_do_processing(business_service);

    business_service_destroy(&business_service);
}
