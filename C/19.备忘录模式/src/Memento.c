/**
 * @file Memento.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Memento.h"

#include "ctools.h"

struct Memento {
    const char* state;
};

Memento* memento_create(const char* state) {
    Memento* memento = (Memento*)calloc(1, sizeof(Memento));
    if (NULL == memento) return NULL;

    memento->state = cstrdup(state);
    return memento;
}

void memento_destroy(Memento* memento) {
    if (NULL == memento) return;
    freep((void**)&memento->state);
    free(memento);
}

const char* memento_get_state(Memento* memento) {
    if (NULL == memento) return NULL;
    return memento->state;
}
