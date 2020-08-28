/**
 * @file Circle.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ShapeStruct.h"
#include "ctools.h"

static void shape_draw(struct Shape *shape) { printf("Circle::draw()\n"); }

struct Shape *circle_create(void) {
    struct Shape *shape = (struct Shape *)calloc(1, sizeof(struct Shape));
    if (NULL == shape) return NULL;

    shape->draw = shape_draw;
    return shape;
}
