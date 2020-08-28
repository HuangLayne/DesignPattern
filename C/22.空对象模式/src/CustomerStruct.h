/**
 * @file CustomerStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef CUSTOMER_STRUCT_H_
#define CUSTOMER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

struct Customer {
    const char* name;
    void* priv;

    bool (*is_null)(struct Customer* customer);
    const char* (*get_name)(struct Customer* customer);
    void (*destroy)(struct Customer* customer);
};

#ifdef __cplusplus
}
#endif
#endif  // CUSTOMER_STRUCT_H_
