/**
 * @file SingletonHunger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SINGLETON_HUNGER_H_
#define SINGLETON_HUNGER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SingletonHunger SingletonHunger;

SingletonHunger* singleton_hunger_get_instance(void);

void singleton_hunger_show_message(SingletonHunger* singleton);

#ifdef __cplusplus
}
#endif
#endif  // SINGLETON_HUNGER_H_
