/**
 * @file BusinessLookUp.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef BUSINESS_LOOK_UP_H_
#define BUSINESS_LOOK_UP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "BusinessService.h"

typedef struct BusinessLookUp BusinessLookUp;

BusinessLookUp* business_look_up_create(void);

void business_look_up_destroy(BusinessLookUp** business_look_up);

BusinessService* business_look_up_get_business_service(BusinessLookUp* business_look_up, const char* service_type);

#ifdef __cplusplus
}
#endif
#endif  // BUSINESS_LOOK_UP_H_
