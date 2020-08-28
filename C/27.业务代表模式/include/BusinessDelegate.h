/**
 * @file BusinessDelegate.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef BUSINESS_DELEGATE_H_
#define BUSINESS_DELEGATE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BusinessDelegate BusinessDelegate;
BusinessDelegate* business_delegate_create(void);

void business_delegate_destroy(BusinessDelegate** business_delegate);

void business_delegate_set_service_type(BusinessDelegate* business_delegate, const char* service_type);

void business_delegate_do_task(BusinessDelegate* business_delegate);

#ifdef __cplusplus
}
#endif
#endif  // BUSINESS_DELEGATE_H_
