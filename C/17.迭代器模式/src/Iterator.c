/**
 * @file Iterator.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Iterator.h"

#include "IteratorStruct.h"
#include "ctools.h"

bool iterator_has_next(Iterator* iterator) {
    if (NULL == iterator || NULL == iterator->has_next) return false;
    return iterator->has_next(iterator);
}

void* iterator_next(Iterator* iterator) {
    if (NULL == iterator || NULL == iterator->next) return false;
    return iterator->next(iterator);
}

void iterator_destroy(Iterator** iterator) {
    if (NULL == iterator || NULL == *iterator) return;
    if (NULL != (*iterator)->destroy) (*iterator)->destroy(*iterator);
    freep((void**)iterator);
}
