/**
 * @file BuilderPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "MealBuilder.h"

int main(int argc, char const *argv[]) {
    MealBuilder meal_builder;

    std::shared_ptr<Meal> veg_meal = meal_builder.PrepareVegMeal();
    std::cout << "Veg Meal" << std::endl;
    veg_meal->ShowItems();
    std::cout << "Total Cost " << veg_meal->GetCost() << std::endl;

    std::shared_ptr<Meal> non_veg_meal = meal_builder.PrepareNonVegMeal();
    std::cout << "Veg Meal" << std::endl;
    non_veg_meal->ShowItems();
    std::cout << "Total Cost" << non_veg_meal->GetCost() << std::endl;

    return 0;
}
