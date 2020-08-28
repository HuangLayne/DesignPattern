/**
 * @file ColdDrinkStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COLD_DRINK_STRUCT_H_
#define COLD_DRINK_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ItemStruct.h"

struct ColdDrink {
    struct Item item;
    void* parent;
    void* priv;

    void* (*destroy)(struct ColdDrink*);
};

struct Packing* cold_drink_packing_default(struct Item*);

#ifdef __cplusplus
}
#endif
#endif  // COLD_DRINK_STRUCT_H_
