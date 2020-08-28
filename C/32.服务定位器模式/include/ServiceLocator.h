/**
 * @file ServiceLocator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef SERVICE_LOCATOR_H_
#define SERVICE_LOCATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Service.h"

typedef struct ServiceLocator ServiceLocator;

ServiceLocator* service_locator_create(void);

void service_locator_destroy(ServiceLocator** service_locator);

Service* service_locator_get_service(ServiceLocator* service_locator, const char* jndi_name);

#ifdef __cplusplus
}
#endif
#endif  // SERVICE_LOCATOR_H_
