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

void shape_set_id(struct Shape* shape, const int64_t id) {
    assert(NULL != shape);
    if (NULL != shape->set_id) shape->set_id(shape, id);
}

int64_t shape_get_id(struct Shape* shape) {
    assert(NULL != shape);
    if (NULL != shape->get_id) return shape->get_id(shape);

    return INT64_MIN;
}

const char* shape_get_type(struct Shape* shape) {
    assert(NULL != shape);
    if (NULL != shape->get_type) return shape->get_type(shape);

    return NULL;
}

void shape_draw(struct Shape* shape) {
    assert(NULL != shape);
    if (NULL != shape->draw) shape->draw(shape);
}

struct Shape* shape_clone(struct Shape* shape) {
    assert(NULL != shape);
    if (NULL != shape->clone) return shape->clone(shape);
    return NULL;
}
