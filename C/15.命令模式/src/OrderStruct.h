/**
 * @file OrderStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef ORDER_STRUCT_H_
#define ORDER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Order {
    void* priv;

    void (*execute)(struct Order* order);
    void (*destroy)(struct Order* order);
};

#ifdef __cplusplus
}
#endif
#endif  // ORDER_STRUCT_H_
