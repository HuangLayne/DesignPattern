/**
 * @file MementoPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "CareTaker.h"
#include "Memento.h"
#include "Originator.h"

int main(int argc, char const* argv[]) {
    Originator* originator = originator_create();
    CareTaker* care_taker = care_taker_create();

    originator_set_state(originator, "State #1");
    originator_set_state(originator, "State #2");

    care_taker_add_memento(care_taker, originator_save_state_to_memento(originator));
    originator_set_state(originator, "State #3");
    care_taker_add_memento(care_taker, originator_save_state_to_memento(originator));
    originator_set_state(originator, "State #4");

    printf("Current State: %s\n", originator_get_state(originator));
    originator_get_state_from_memento(originator, care_taker_get_memento(care_taker, 0));
    printf("First saved State: %s\n", originator_get_state(originator));
    originator_get_state_from_memento(originator, care_taker_get_memento(care_taker, 1));
    printf("Second saved State: %s\n", originator_get_state(originator));

    originator_destroy(&originator);
    care_taker_destroy(&care_taker);

    return 0;
}
