/**
 * @file ShapeCache.c
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

static void* shape_map = NULL;

extern struct Shape* rectangle_create(void);
extern struct Shape* square_create(void);
extern struct Shape* circle_create(void);

void shape_cache_load_cache(void) {
    if (NULL == shape_map) {
        shape_map = cmap_create();
        struct Shape* circle = circle_create();
        shape_set_id(circle, 1);
        cmap_put(shape_map, 1, circle);

        struct Shape* square = square_create();
        shape_set_id(square, 2);
        cmap_put(shape_map, 2, square);

        struct Shape* rectangle = rectangle_create();
        shape_set_id(rectangle, 3);
        cmap_put(shape_map, 3, rectangle);
    }
}

Shape* shape_cache_get_shape(const int64_t shape_id) {
    struct Shape* shape = cmap_get(shape_map, shape_id);
    if (NULL != shape) return shape_clone(shape);
    return NULL;
}
