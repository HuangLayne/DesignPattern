/**
 * @file Iterator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef ITERATOR_H_
#define ITERATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

typedef struct Iterator Iterator;

bool iterator_has_next(Iterator* iterator);
void* iterator_next(Iterator* iterator);
void iterator_destroy(Iterator** iterator);

#ifdef __cplusplus
}
#endif
#endif  // ITERATOR_H_
