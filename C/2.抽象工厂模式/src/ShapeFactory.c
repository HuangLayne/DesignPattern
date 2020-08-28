/**
 * @file ShapeFactory.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdlib.h>
#include <string.h>

#include "FactoryStruct.h"
#include "ShapeStruct.h"

extern struct Shape* rectangle_create(void);
extern struct Shape* square_create(void);
extern struct Shape* circle_create(void);

static struct Shape* factory_get_shape(struct Factory* factory, const char* shape_type) {
    if (NULL == shape_type) return NULL;

    if (0 == strcasecmp("CIRCLE", shape_type)) {
        return circle_create();
    } else if (0 == strcasecmp("RECTANGLE", shape_type)) {
        return rectangle_create();
    } else if (0 == strcasecmp("SQUARE", shape_type)) {
        return square_create();
    }

    return NULL;
}

static struct Color* factory_get_color(struct Factory* factory, const char* color_type) { return NULL; }

struct Factory* shape_factory_create(void) {
    struct Factory* factory = (struct Factory*)calloc(1, sizeof(struct Factory));
    if (NULL == factory) return NULL;

    factory->get_color = factory_get_color;
    factory->get_shape = factory_get_shape;

    return factory;
}
