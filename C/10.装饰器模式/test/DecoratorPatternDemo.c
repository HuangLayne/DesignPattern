/**
 * @file DecoratorPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "Shape.h"
#include "ShapeDecorator.h"

int main(int argc, char const* argv[]) {
    Shape* circle = circle_create();
    ShapeDecorator* red_circle = red_shape_decorator_create(circle_create());
    ShapeDecorator* red_rectangle = red_shape_decorator_create(rectangle_create());

    printf("Circle with normal border\n");
    shape_draw(circle);

    printf("\nCircle of red border\n");
    shape_decorator_draw(red_circle);

    printf("\nRectangle of red border\n");
    shape_decorator_draw(red_rectangle);

    shape_destroy(&circle);
    shape_decorator_destroy(&red_circle);
    shape_decorator_destroy(&red_rectangle);

    return 0;
}
