/**
 * @file ServiceLocatorPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ServiceLocator.h"

int main(int argc, char const* argv[]) {
    ServiceLocator* service_locator = service_locator_create();

    Service* service = service_locator_get_service(service_locator, "Service1");
    serveice_execute(service);

    service = service_locator_get_service(service_locator, "Service2");
    serveice_execute(service);

    service = service_locator_get_service(service_locator, "Service1");
    serveice_execute(service);

    service = service_locator_get_service(service_locator, "Service2");
    serveice_execute(service);

    service_locator_destroy(&service_locator);
    return 0;
}
