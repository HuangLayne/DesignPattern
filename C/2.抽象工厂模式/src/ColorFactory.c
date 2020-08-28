/**
 * @file ColorFactory.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ColorStruct.h"
#include "FactoryStruct.h"

extern struct Color* red_create(void);
extern struct Color* green_create(void);
extern struct Color* blue_create(void);

static struct Shape* factory_get_shape(struct Factory* factory, const char* shape_type) { return NULL; }

static struct Color* factory_get_color(struct Factory* factory, const char* color_type) {
    if (NULL == color_type) return NULL;

    if (0 == strcasecmp("RED", color_type)) {
        return red_create();
    } else if (0 == strcasecmp("GREEN", color_type)) {
        return green_create();
    } else if (0 == strcasecmp("BLUE", color_type)) {
        return blue_create();
    }

    return NULL;
}

struct Factory* color_factory_create(void) {
    struct Factory* factory = (struct Factory*)calloc(1, sizeof(struct Factory));
    if (NULL == factory) return NULL;

    factory->get_color = factory_get_color;
    factory->get_shape = factory_get_shape;

    return factory;
}
