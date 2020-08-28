/**
 * @file Observer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ObserverStruct.h"
#include "ctools.h"

void observer_update(struct Observer* observer) {
    if (NULL == observer || NULL == observer->update) return;
    observer->update(observer);
}

void observer_destroy(struct Observer** observer) {
    if (NULL == observer || NULL == *observer) return;
    if (NULL != (*observer)->destroy) (*observer)->destroy(*observer);
    freep((void**)observer);
}
