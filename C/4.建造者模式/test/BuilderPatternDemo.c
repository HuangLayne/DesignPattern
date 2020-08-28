/**
 * @file BuilderPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>

#include "MealBuilder.h"

int main(int argc, char const* argv[]) {
    Meal* veg_meal = meal_builder_prepare_veg_meal();
    printf("Veg Meal\n");
    meal_show_items(veg_meal);
    printf("Total Cost: %.1f\n", meal_get_cost(veg_meal));
    meal_destory(&veg_meal);

    Meal* non_veg_meal = meal_builder_prepare_non_veg_meal();
    printf("\n\nNon-Veg Meal\n");
    meal_show_items(non_veg_meal);
    printf("Total Cost: %.1f\n", meal_get_cost(non_veg_meal));
    meal_destory(&non_veg_meal);

    return 0;
}
