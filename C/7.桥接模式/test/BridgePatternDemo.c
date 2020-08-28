/**
 * @file BridgePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "DrawAPI.h"
#include "Shape.h"

int main(int argc, char const* argv[]) {
    DrawAPI* red_circle_draw_api = red_circle_create();
    Shape* red_circle = circle_create(100, 100, 10, red_circle_draw_api);
    shape_draw(red_circle);
    shape_destory(&red_circle);
    draw_api_destroy(&red_circle_draw_api);

    DrawAPI* green_circle_draw_api = green_circle_create();
    Shape* green_circle = circle_create(100, 100, 10, green_circle_draw_api);
    shape_draw(green_circle);
    shape_destory(&green_circle);
    draw_api_destroy(&green_circle_draw_api);

    return 0;
}
