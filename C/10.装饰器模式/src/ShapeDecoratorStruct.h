/**
 * @file ShapeDecoratorStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_DECORATOR_STRUCT_H_
#define SHAPE_DECORATOR_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ShapeStruct.h"

struct ShapeDecorator {
    struct Shape* decorated_shape;
    void* priv;

    void (*draw)(struct ShapeDecorator* shapedecorator);
    void (*destroy)(struct ShapeDecorator* shapedecorator);
};

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_DECORATOR_STRUCT_H_
