/**
 * @file FrontController.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "FrontController.h"

#include <stdio.h>

#include "Dispatcher.h"
#include "ctools.h"

struct FrontController {
    Dispatcher* dispatcher;
};

FrontController* front_controller_create(void) {
    FrontController* front_controller = (FrontController*)calloc(1, sizeof(FrontController));
    if (NULL == front_controller) return NULL;
    front_controller->dispatcher = dispatcher_create();
    return front_controller;
}

void front_controller_destroy(FrontController** front_controller) {
    if (NULL == front_controller || NULL == *front_controller) return;
    FrontController* self = *front_controller;
    dispatcher_destroy(&self->dispatcher);
    freep((void**)front_controller);
}

static bool is_authentic_user(void) {
    printf("User is authenticated successfully.\n");
    return true;
}

static void track_request(const char* request) { printf("Page requested: %s\n", request); }

void front_controller_dispatch_request(FrontController* front_controller, const char* request) {
    if (NULL == front_controller) return;
    //记录每一个请求
    track_request(request);
    //对用户进行身份验证
    if (is_authentic_user()) {
        dispatcher_dispatch(front_controller->dispatcher, request);
    }
}
