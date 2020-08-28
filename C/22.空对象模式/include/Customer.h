/**
 * @file Customer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

typedef struct Customer Customer;
Customer* customer_get_customer(const char* name);
void customer_destroy(Customer** customer);
bool customer_is_null(Customer* customer);
const char* customer_get_name(Customer* customer);

#ifdef __cplusplus
}
#endif
#endif  // CUSTOMER_H_
