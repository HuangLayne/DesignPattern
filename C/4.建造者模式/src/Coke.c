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
#include "mem.h"

static const char* item_name(struct Item* item) { return "Coke"; }

static struct Packing* item_packing(struct Item* item) { return cold_drink_packing_default(item); }

static float item_price(struct Item* item) { return 30.0f; }

struct ColdDrink* coke_create(void) {
    struct ColdDrink* cold_drink = (struct ColdDrink*)calloc(1, sizeof(struct ColdDrink));
    if (NULL == cold_drink) return NULL;

    cold_drink->item.name = item_name;
    cold_drink->item.packing = item_packing;
    cold_drink->item.price = item_price;
    cold_drink->item.child = cold_drink;
    cold_drink->parent = &cold_drink->item;
    return cold_drink;
}
