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
#include "ShapeFactory.h"

#include <stdlib.h>
#include <string.h>

#include "ShapeStruct.h"

extern struct Shape* circle_create(void);
extern struct Shape* rectangle_create(void);
extern struct Shape* square_create(void);

Shape* shape_factory_get_shape(const char* shape_type) {
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
