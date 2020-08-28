/**
 * @file NullPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Customer.h"

int main(int argc, char const* argv[]) {
    Customer* customer1 = customer_get_customer("Rob");
    Customer* customer2 = customer_get_customer("Bob");
    Customer* customer3 = customer_get_customer("Julie");
    Customer* customer4 = customer_get_customer("Laura");

    printf("Customers\n");
    printf("%s\n", customer_get_name(customer1));
    printf("%s\n", customer_get_name(customer2));
    printf("%s\n", customer_get_name(customer3));
    printf("%s\n", customer_get_name(customer4));

    customer_destroy(&customer1);
    customer_destroy(&customer2);
    customer_destroy(&customer3);
    customer_destroy(&customer4);

    return 0;
}
