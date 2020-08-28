/**
 * @file SingletonLazy.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "SingletonLazy.h"

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

struct SingletonLazy {
    int x;
};

static pthread_once_t g_create_once = PTHREAD_ONCE_INIT;
static SingletonLazy* singleton_instance = NULL;

static void create_singleton_instance(void) { singleton_instance = (SingletonLazy*)calloc(1, sizeof(SingletonLazy)); }

SingletonLazy* singleton_lazy_get_instance(void) {
    pthread_once(&g_create_once, create_singleton_instance);
    return singleton_instance;
}

void singleton_lazy_show_message(SingletonLazy* singleton) { printf("Singleton Lazy %p\n", (void*)singleton); }
