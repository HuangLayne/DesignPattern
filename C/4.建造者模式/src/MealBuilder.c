/**
 * @file MealBuilder.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "MealBuilder.h"

#include "BurgerStruct.h"
#include "ColdDrinkStruct.h"
#include "MealInternal.h"
#include "mem.h"

extern struct Burger* chicken_burger_create(void);
extern struct Burger* veg_burger_create(void);
extern struct ColdDrink* coke_create(void);
extern struct ColdDrink* pepsi_create(void);

Meal* meal_builder_prepare_veg_meal(void) {
    Meal* meal = meal_create();
    struct Burger* veg_burger = veg_burger_create();
    if (NULL != veg_burger) meal_add_items(meal, veg_burger->parent);

    struct ColdDrink* coke = coke_create();
    if (NULL != coke) meal_add_items(meal, coke->parent);

    return meal;
}

Meal* meal_builder_prepare_non_veg_meal(void) {
    Meal* meal = meal_create();
    struct Burger* chicken_burger = chicken_burger_create();
    if (NULL != chicken_burger) meal_add_items(meal, chicken_burger->parent);

    struct ColdDrink* pepsi = pepsi_create();
    if (NULL != pepsi) meal_add_items(meal, pepsi->parent);

    return meal;
}
