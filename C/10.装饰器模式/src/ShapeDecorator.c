/**
 * @file ShapeDecorator.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ShapeDecorator.h"

#include "ShapeDecoratorStruct.h"
#include "ctools.h"

void shape_decorator_destroy(ShapeDecorator** shape_decorator) {
    if (NULL == shape_decorator || NULL == *shape_decorator) return;
    if (NULL != (*shape_decorator)->destroy) (*shape_decorator)->destroy(*shape_decorator);

    freep((void**)shape_decorator);
}

void shape_decorator_draw(ShapeDecorator* shape_decorator) {
    if (NULL == shape_decorator) return;
    if (NULL != shape_decorator->draw) shape_decorator->draw(shape_decorator);
}
