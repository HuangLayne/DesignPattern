/**
 * @file RedShapeDecorator.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Shape.h"
#include "ShapeDecoratorStruct.h"
#include "ShapeStruct.h"
#include "ctools.h"

static void set_red_border(struct ShapeDecorator *shape_decorator) { printf("Border Color: Red\n"); }

static void draw(struct ShapeDecorator *shape_decorator) {
    if (NULL != shape_decorator->decorated_shape && NULL != shape_decorator->decorated_shape->draw) {
        shape_decorator->decorated_shape->draw(shape_decorator->decorated_shape);
    }
    set_red_border(shape_decorator);
}

static void destroy(struct ShapeDecorator *shape_decorator) { shape_destroy(&shape_decorator->decorated_shape); }

struct ShapeDecorator *red_shape_decorator_create(struct Shape *decorated_shape) {
    struct ShapeDecorator *shape_decorator = (struct ShapeDecorator *)calloc(1, sizeof(struct ShapeDecorator));
    if (NULL == shape_decorator) return NULL;

    shape_decorator->decorated_shape = decorated_shape;
    shape_decorator->draw = draw;
    shape_decorator->destroy = destroy;
    return shape_decorator;
}
