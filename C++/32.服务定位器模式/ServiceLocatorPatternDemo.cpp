/**
 * @file ServiceLocatorPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ServiceLocator.h"

int main(int argc, char const *argv[]) {
    ServiceLocator service_locator;
    std::shared_ptr<Service> service = service_locator.GetService("Service1");
    service->Execute();
    service = service_locator.GetService("Service2");
    service->Execute();
    service = service_locator.GetService("Service1");
    service->Execute();
    service = service_locator.GetService("Service2");
    service->Execute();

    return 0;
}
