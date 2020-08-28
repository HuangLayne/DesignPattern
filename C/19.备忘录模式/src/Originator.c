/**
 * @file Originator.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Originator.h"

#include "ctools.h"

struct Originator {
    const char* state;
};

Originator* originator_create(void) {
    Originator* originator = (Originator*)calloc(1, sizeof(Originator));
    return originator;
}

void originator_destroy(Originator** originator) {
    if (NULL == originator || NULL == *originator) return;
    freep((void**)&(*originator)->state);
    freep((void**)originator);
}

void originator_set_state(Originator* originator, const char* state) {
    if (NULL == originator) return;
    freep((void**)&originator->state);
    originator->state = cstrdup(state);
}

const char* originator_get_state(Originator* originator) {
    if (NULL == originator) return NULL;
    return originator->state;
}

Memento* originator_save_state_to_memento(Originator* originator) {
    if (NULL == originator) return NULL;
    return memento_create(originator->state);
}

void originator_get_state_from_memento(Originator* originator, Memento* memento) {
    if (NULL == originator || NULL == memento) return;
    originator_set_state(originator, memento_get_state(memento));
}
