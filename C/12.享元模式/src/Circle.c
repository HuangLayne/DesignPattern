/**
 * @file Circle.c
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
#include <string.h>

#include "CircleInternal.h"
#include "CircleStruct.h"

Circle* circle_create(const char* color) {
    Circle* circle = (Circle*)calloc(1, sizeof(Circle));
    if (NULL == circle) return NULL;

    circle->color = strdup(color);
    return circle;
}

void circle_destroy(Circle** circle) {
    if (NULL == circle || NULL == *circle) return;
    Circle* self = *circle;

    free((void*)self->color);
    free(*circle);
    *circle = NULL;
}

void circle_set_x(Circle* circle, int x) {
    if (NULL == circle) return;
    circle->x = x;
}

void circle_set_y(Circle* circle, int y) {
    if (NULL == circle) return;
    circle->y = y;
}

void circle_set_radius(Circle* circle, int radius) {
    if (NULL == circle) return;
    circle->radius = radius;
}

void circle_draw(Circle* circle) {
    if (NULL == circle) return;
    printf("Circle: Draw() [Color : %s, x : %d, y : %d, radius : %d\n", circle->color, circle->x, circle->y,
           circle->radius);
}
