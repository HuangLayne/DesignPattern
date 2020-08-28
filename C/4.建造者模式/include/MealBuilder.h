/**
 * @file MealBuilder.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef MEAL_BUILDER_H_
#define MEAL_BUILDER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Meal.h"

Meal* meal_builder_prepare_veg_meal(void);
Meal* meal_builder_prepare_non_veg_meal(void);

#ifdef __cplusplus
}
#endif
#endif  // MEAL_BUILDER_H_
