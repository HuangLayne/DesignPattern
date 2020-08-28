/**
 * @file ShapeStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_STRUCT_H_
#define SHAPE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Shape {
    void* priv;

    void (*draw)(struct Shape* shape);
    void (*destroy)(struct Shape* shape);
};

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_STRUCT_H_
