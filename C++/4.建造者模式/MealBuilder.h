/**
 * @file MealBuilder.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MEAL_BUILDER_H_
#define MEAL_BUILDER_H_

#include "ChickenBurger.h"
#include "Coke.h"
#include "Meal.h"
#include "Pepsi.h"
#include "VegBurger.h"

class MealBuilder {
   public:
    MealBuilder() = default;
    ~MealBuilder() = default;
    std::shared_ptr<Meal> PrepareVegMeal() {
        std::shared_ptr<Meal> meal = std::make_shared<Meal>();
        meal->AddItem(std::make_shared<VegBurger>());
        meal->AddItem(std::make_shared<Coke>());
        return meal;
    }

    std::shared_ptr<Meal> PrepareNonVegMeal() {
        std::shared_ptr<Meal> meal = std::make_shared<Meal>();
        meal->AddItem(std::make_shared<ChickenBurger>());
        meal->AddItem(std::make_shared<Pepsi>());
        return meal;
    }
};

#endif  // MEAL_BUILDER_H_
