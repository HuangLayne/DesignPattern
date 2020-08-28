/**
 * @file Service.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SERVICE_H_
#define SERVICE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Service Service;

Service* service_create_service1(void);

Service* service_create_service2(void);

void service_destroy(Service** service);

void service_free_func(Service* service);

const char* service_get_name(Service* service);

void serveice_execute(Service* service);

#ifdef __cplusplus
}
#endif
#endif  // SERVICE_H_
