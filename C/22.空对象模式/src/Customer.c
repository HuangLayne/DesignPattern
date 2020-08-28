/**
 * @file Customer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Customer.h"

#include "CustomerStruct.h"
#include "ctools.h"

static const char* names[] = {"Rob", "Joe", "Julie"};

extern struct Customer* null_customer_create(void);
extern struct Customer* real_customer_create(const char* name);

Customer* customer_get_customer(const char* name) {
    for (int i = 0; i < sizeof(names) / sizeof(const char*); ++i) {
        if (0 == strcasecmp(name, names[i])) {
            return real_customer_create(name);
        }
    }

    return null_customer_create();
}

bool customer_is_null(Customer* customer) {
    if (NULL == customer || NULL == customer->is_null) return false;
    return customer->is_null(customer);
}

const char* customer_get_name(Customer* customer) {
    if (NULL == customer || NULL == customer->get_name) return NULL;
    return customer->get_name(customer);
}

void customer_destroy(Customer** customer) {
    if (NULL == customer || NULL == *customer) return;
    if (NULL != (*customer)->destroy) (*customer)->destroy(*customer);
    if (NULL != (*customer)->name) freep((void**)&(*customer)->name);
    freep((void**)customer);
}
