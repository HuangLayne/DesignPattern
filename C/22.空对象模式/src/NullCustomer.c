/**
 * @file NullCustomer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CustomerStruct.h"
#include "ctools.h"

static bool is_null(struct Customer* customer) { return true; }

static const char* get_name(struct Customer* customer) { return "Not Available in Customer Database"; }

struct Customer* null_customer_create(void) {
    struct Customer* customer = (struct Customer*)calloc(1, sizeof(struct Customer));
    if (NULL == customer) return NULL;

    customer->is_null = is_null;
    customer->get_name = get_name;
    return customer;
}
