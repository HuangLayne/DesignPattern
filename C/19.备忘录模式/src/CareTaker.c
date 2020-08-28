/**
 * @file CareTaker.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CareTaker.h"

#include "ctools.h"

struct CareTaker {
    List* memento_list;
};

CareTaker* care_taker_create(void) {
    CareTaker* care_taker = (CareTaker*)calloc(1, sizeof(CareTaker));
    if (NULL == care_taker) return NULL;

    care_taker->memento_list = list_create();
    care_taker->memento_list->free_func = (void (*)(int64_t))memento_destroy;
    return care_taker;
}

void care_taker_destroy(CareTaker** care_taker) {
    if (NULL == care_taker || NULL == *care_taker) return;

    list_destroy((*care_taker)->memento_list);
    freep((void**)care_taker);
}

void care_taker_add_memento(CareTaker* care_taker, Memento* memento) {
    if (NULL == care_taker || NULL == care_taker->memento_list) return;

    list_push_back(care_taker->memento_list, list_node_new((int64_t)memento));
}

Memento* care_taker_get_memento(CareTaker* care_taker, int index) {
    if (NULL == care_taker || NULL == care_taker->memento_list) return NULL;
    ListNode* node = list_at(care_taker->memento_list, index);
    if (NULL != node) return (Memento*)node->val;
    return NULL;
}
