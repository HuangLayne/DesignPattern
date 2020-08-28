/**
 * @file Factory.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Factory.h"

#include <assert.h>
#include <stdlib.h>

#include "FactoryStruct.h"

struct Shape* factory_get_shape(Factory* shape_factory, const char* shape_type) {
    assert(NULL != shape_factory);
    if (NULL != shape_factory->get_shape) return shape_factory->get_shape(shape_factory, shape_type);

    return NULL;
}

struct Color* factory_get_color(Factory* color_factory, const char* color_type) {
    assert(NULL != color_factory);
    if (NULL != color_factory->get_color) return color_factory->get_color(color_factory, color_type);

    return NULL;
}

void factory_destory(Factory** factory) {
    if (NULL == factory || NULL == *factory) return;

    Factory* self = *factory;
    if (NULL != self->destroy) {
        self->destroy(self);
    }

    free(*factory);
    *factory = NULL;
}
