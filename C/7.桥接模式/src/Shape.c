/**
 * @file Shape.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Shape.h"

#include "ShapeStruct.h"
#include "ctools.h"

void shape_destory(struct Shape** shape) {
    if (NULL == shape || NULL == *shape) return;

    struct Shape* self = *shape;
    if (NULL != self->destroy) {
        self->destroy(self);
    }

    free(*shape);
    *shape = NULL;
}

void shape_draw(struct Shape* shape) {
    assert(NULL != shape);
    if (NULL != shape->draw) shape->draw(shape);
}
