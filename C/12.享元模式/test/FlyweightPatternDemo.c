/**
 * @file FlyweightPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdlib.h>

#include "ShapeFactory.h"

static char* colors[] = {"Red", "Green", "Blue", "White", "Black"};

static const char* get_random_color(void) { return colors[rand() % (sizeof(colors) / sizeof(char*))]; }
static int get_random_x(void) { return rand() % 100; }
static int get_random_y(void) { return rand() % 100; }

int main(int argc, char const* argv[]) {
    for (int i = 0; i < 20; ++i) {
        Circle* circle = shape_factory_get_circle(get_random_color());
        circle_set_x(circle, get_random_x());
        circle_set_y(circle, get_random_y());
        circle_set_radius(circle, 100);
        circle_draw(circle);
    }

    return 0;
}
