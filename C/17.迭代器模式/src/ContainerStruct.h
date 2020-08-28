/**
 * @file ContainerStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CONTAINER_STRUCT_H_
#define CONTAINER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "IteratorStruct.h"

struct Container {
    void* priv;

    struct Iterator* (*get_iterator)(struct Container* container);
    void (*destroy)(struct Container* container);
};

#ifdef __cplusplus
}
#endif
#endif  // CONTAINER_STRUCT_H_
