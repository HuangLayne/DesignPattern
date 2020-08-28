/**
 * @file ShapeDecorator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_DECORATOR_H_
#define SHAPE_DECORATOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Shape.h"

typedef struct ShapeDecorator ShapeDecorator;

ShapeDecorator* red_shape_decorator_create(struct Shape* decorated_shape);
void shape_decorator_destroy(ShapeDecorator** shape_decorator);
void shape_decorator_draw(ShapeDecorator* shape_decorator);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_DECORATOR_H_
