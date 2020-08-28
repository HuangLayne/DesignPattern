/**
 * @file Meal.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef MEAL_H_
#define MEAL_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Meal Meal;

float meal_get_cost(Meal* meal);
void meal_show_items(Meal* meal);
void meal_destory(Meal** meal);

#ifdef __cplusplus
}
#endif
#endif  // MEAL_H_
