/**
 * @file Originator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef ORIGINATOR_H_
#define ORIGINATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Memento.h"

typedef struct Originator Originator;
Originator* originator_create(void);
void originator_destroy(Originator** originator);
void originator_set_state(Originator* originator, const char* state);
const char* originator_get_state(Originator* originator);
Memento* originator_save_state_to_memento(Originator* originator);
void originator_get_state_from_memento(Originator* originator, Memento* memento);

#ifdef __cplusplus
}
#endif
#endif  // ORIGINATOR_H_
