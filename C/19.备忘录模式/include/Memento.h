/**
 * @file Memento.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef MEMENTO_H_
#define MEMENTO_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Memento Memento;

Memento* memento_create(const char* state);
void memento_destroy(Memento* memento);
const char* memento_get_state(Memento* memento);

#ifdef __cplusplus
}
#endif
#endif  // MEMENTO_H_
