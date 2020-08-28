/**
 * @file Square.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ShapeStruct.h"
#include "ctools.h"

struct Shape *square_create(void);

static void shape_set_id(struct Shape *shape, const int64_t id) { shape->id = id; }

static int64_t shape_get_id(struct Shape *shape) { return shape->id; }

static const char *shape_get_type(struct Shape *shape) { return shape->type; }

static struct Shape *shape_clone(struct Shape *shape) {
    struct Shape *new_shape = square_create();
    return new_shape;
}

static void shape_draw(struct Shape *shape) { printf("Inside Square::draw() method.\n"); }

struct Shape *square_create(void) {
    struct Shape *shape = (struct Shape *)calloc(1, sizeof(struct Shape));
    shape->type = "Square";
    shape->set_id = shape_set_id;
    shape->get_id = shape_get_id;
    shape->get_type = shape_get_type;
    shape->clone = shape_clone;
    shape->draw = shape_draw;
    return shape;
}
