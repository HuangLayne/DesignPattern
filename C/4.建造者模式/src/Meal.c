/**
 * @file Meal.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Item.h"
#include "MealInternal.h"
#include "Packing.h"
#include "list.h"
#include "mem.h"

struct Meal {
    List* items;
};

Meal* meal_create(void) {
    Meal* meal = (Meal*)calloc(1, sizeof(Meal));
    meal->items = list_create();
    meal->items->free_func = (void (*)(int64_t))item_destroy;
    return meal;
}

void meal_destory(Meal** meal) {
    if (NULL == meal || NULL == *meal) return;

    Meal* self = *meal;
    if (NULL != self->items) {
        list_destroy(self->items);
        self->items = NULL;
    }

    freep((void**)meal);
}

void meal_add_items(Meal* meal, Item* item) {
    ListNode* node = list_node_new((int64_t)item);
    list_push_back(meal->items, node);
}

float meal_get_cost(Meal* meal) {
    float cost = 0.0f;
    ListIterator* it = list_iterator_new(meal->items, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        Item* item = (Item*)node->val;
        cost += item_price(item);
    }
    list_iterator_destroy(it);

    return cost;
}

void meal_show_items(Meal* meal) {
    ListIterator* it = list_iterator_new(meal->items, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        Item* item = (Item*)node->val;
        printf("Item : %s ", item_name(item));
        Packing* packing = item_packing(item);
        printf(", Packing : %s ", packing_pack(packing));
        packing_destroy(&packing);
        printf(", Price : %f\n", item_price(item));
    }
    list_iterator_destroy(it);
}
