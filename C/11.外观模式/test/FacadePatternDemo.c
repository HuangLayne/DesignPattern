/**
 * @file FacadePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ShapeMaker.h"

int main(int argc, char const* argv[]) {
    ShapeMaker* shape_maker = shape_maker_create();
    shape_maker_draw_circle(shape_maker);
    shape_maker_draw_rectangle(shape_maker);
    shape_maker_draw_square(shape_maker);
    shape_maker_destroy(&shape_maker);

    return 0;
}
