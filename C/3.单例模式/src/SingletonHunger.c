#include "SingletonHunger.h"

#include <stdio.h>

struct SingletonHunger {
    int x;
};

static SingletonHunger singleton_instance;

SingletonHunger* singleton_hunger_get_instance(void) { return &singleton_instance; }

void singleton_hunger_show_message(SingletonHunger* singleton) { printf("Singleton Hunger %p\n", (void*)singleton); }
