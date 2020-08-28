/**
 * @file Circle.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "ShapeStruct.h"

static void draw(struct Shape *shape) { printf("Inside Rectangle::draw() method.\n"); }

struct Shape *rectangle_create(void) {
    struct Shape *shape = (struct Shape *)calloc(1, sizeof(struct Shape));
    if (NULL == shape) return NULL;
    shape->draw = draw;
    return shape;
}
