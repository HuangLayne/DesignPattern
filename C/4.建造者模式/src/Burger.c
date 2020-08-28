/**
 * @file Burger.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "BurgerStruct.h"
#include "Packing.h"

struct Packing* burger_packing_default(struct Item* item) {
    return wrapper_create();
}
