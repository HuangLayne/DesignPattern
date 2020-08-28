/**
 * @file IteratorStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef ITERATOR_STRUCT_H_
#define ITERATOR_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

struct Iterator {
    void* priv;

    bool (*has_next)(struct Iterator* iterator);
    void* (*next)(struct Iterator* iterator);
    void (*destroy)(struct Iterator* iterator);
};

#ifdef __cplusplus
}
#endif
#endif  // ITERATOR_STRUCT_H_
