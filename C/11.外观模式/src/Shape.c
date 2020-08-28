/**
 * @file Shape.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */
#include "Shape.h"

#include "ShapeStruct.h"
#include "ctools.h"

void shape_destroy(Shape** shape) {
    if (NULL == shape || NULL == *shape) return;
    if (NULL != (*shape)->destroy) (*shape)->destroy(*shape);
    freep((void**)shape);
}

void shape_draw(Shape* shape) {
    if (NULL != shape && NULL != shape->draw) {
        shape->draw(shape);
    }
}
