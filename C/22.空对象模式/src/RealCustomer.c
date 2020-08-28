/**
 * @file RealCustomer.c
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

static bool is_null(struct Customer* customer) { return false; }

static const char* get_name(struct Customer* customer) {
    if (NULL == customer) return NULL;
    return customer->name;
}

struct Customer* real_customer_create(const char* name) {
    struct Customer* customer = (struct Customer*)calloc(1, sizeof(struct Customer));
    if (NULL == customer) return NULL;

    customer->name = cstrdup(name);
    customer->is_null = is_null;
    customer->get_name = get_name;
    return customer;
}
