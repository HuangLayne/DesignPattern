/**
 * @file ShapeStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef SHAPE_STRUCT_H_
#define SHAPE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

struct Shape {
    int64_t id;
    const char* type;
    void* priv;

    void (*set_id)(struct Shape* shape, const int64_t id);
    int64_t (*get_id)(struct Shape* shape);
    const char* (*get_type)(struct Shape* shape);
    struct Shape* (*clone)(struct Shape* shape);
    void (*draw)(struct Shape* shape);
    void (*destroy)(struct Shape* shape);
};

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_STRUCT_H_
