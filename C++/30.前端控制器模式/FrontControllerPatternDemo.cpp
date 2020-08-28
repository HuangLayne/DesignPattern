/**
 * @file FrontControllerPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "FrontController.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<FrontController> front_controller = std::make_shared<FrontController>();
    front_controller->DispatchRequest("HOME");
    front_controller->DispatchRequest("STUDENT");
    return 0;
}
