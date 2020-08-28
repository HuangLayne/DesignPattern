/**
 * @file ShapeMaker.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ShapeMaker.h"

#include "Shape.h"
#include "ShapeStruct.h"
#include "ctools.h"

extern struct Shape* circle_create(void);
extern struct Shape* rectangle_create(void);
extern struct Shape* square_create(void);

struct ShapeMaker {
    struct Shape* circle;
    struct Shape* rectangle;
    struct Shape* square;
};

ShapeMaker* shape_maker_create(void) {
    ShapeMaker* shape_maker = (ShapeMaker*)calloc(1, sizeof(ShapeMaker));
    if (NULL == shape_maker) return NULL;

    shape_maker->circle = circle_create();
    shape_maker->rectangle = rectangle_create();
    shape_maker->square = square_create();

    return shape_maker;
}

void shape_maker_destroy(ShapeMaker** shape_maker) {
    if (NULL == shape_maker || NULL == *shape_maker) return;

    ShapeMaker* self = *shape_maker;
    shape_destroy(&self->circle);
    shape_destroy(&self->rectangle);
    shape_destroy(&self->square);

    freep((void**)shape_maker);
}

void shape_maker_draw_circle(ShapeMaker* shape_maker) {
    if (NULL == shape_maker) return;
    shape_draw(shape_maker->circle);
}

void shape_maker_draw_rectangle(ShapeMaker* shape_maker) {
    if (NULL == shape_maker) return;
    shape_draw(shape_maker->rectangle);
}

void shape_maker_draw_square(ShapeMaker* shape_maker) {
    if (NULL == shape_maker) return;
    shape_draw(shape_maker->square);
}
