/**
 * @file BurgerStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef BURGER_STRUCT_H_
#define BURGER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ItemStruct.h"

struct Burger {
    struct Item item;
    void* parent;
    void* priv;

    void (*destroy)(struct Burger*);
};

struct Packing* burger_packing_default(struct Item*);

#ifdef __cplusplus
}
#endif
#endif  // BURGER_STRUCT_H_
