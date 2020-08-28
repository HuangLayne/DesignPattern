/**
 * @file ColdDrink.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ColdDrinkStruct.h"
#include "Packing.h"

struct Packing* cold_drink_packing_default(struct Item* item) {
    return bottle_create();
}
