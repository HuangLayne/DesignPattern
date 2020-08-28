/**
 * @file FrontControllerPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "FrontController.h"

int main(int argc, char const* argv[]) {
    FrontController* front_controller = front_controller_create();

    front_controller_dispatch_request(front_controller, "HOME");
    front_controller_dispatch_request(front_controller, "STUDENT");

    front_controller_destroy(&front_controller);
    return 0;
}
