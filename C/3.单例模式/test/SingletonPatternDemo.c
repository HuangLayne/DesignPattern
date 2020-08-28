/**
 * @file SingletonPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>

#include "SingletonHunger.h"
#include "SingletonLazy.h"

int main(int argc, char const *argv[]) {
    SingletonHunger *hunger1 = singleton_hunger_get_instance();
    singleton_hunger_show_message(hunger1);

    SingletonHunger *hunger2 = singleton_hunger_get_instance();
    singleton_hunger_show_message(hunger2);

    SingletonLazy *lazy1 = singleton_lazy_get_instance();
    singleton_lazy_show_message(lazy1);

    SingletonLazy *lazy2 = singleton_lazy_get_instance();
    singleton_lazy_show_message(lazy2);
    return 0;
}
