/**
 * @file FrontController.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef FRONT_CONTROLLER_H_
#define FRONT_CONTROLLER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FrontController FrontController;

FrontController* front_controller_create(void);

void front_controller_destroy(FrontController** front_controller);

void front_controller_dispatch_request(FrontController* front_controller, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // FRONT_CONTROLLER_H_
