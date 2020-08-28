/**
 * @file CareTaker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CARE_TAKER_H_
#define CARE_TAKER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Memento.h"

typedef struct CareTaker CareTaker;
CareTaker* care_taker_create(void);
void care_taker_destroy(CareTaker** care_taker);
void care_taker_add_memento(CareTaker* care_taker, Memento* memento);
Memento* care_taker_get_memento(CareTaker* care_taker, int index);

#ifdef __cplusplus
}
#endif
#endif  // CARE_TAKER_H_
