/**
 * @file BusinessDelegatePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "BusinessDelegate.h"
#include "Client.h"

int main(int argc, char const* argv[]) {
    BusinessDelegate* business_delegate = business_delegate_create();
    business_delegate_set_service_type(business_delegate, "EJB");

    Client* client = client_create(business_delegate);
    client_do_task(client);

    business_delegate_set_service_type(business_delegate, "JMS");
    client_do_task(client);

    business_delegate_destroy(&business_delegate);
    client_destroy(&client);

    return 0;
}
