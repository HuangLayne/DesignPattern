/**
 * @file Red.c
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

#include "ColorStruct.h"

static void color_fill(struct Color* color) { printf("Inside Blue::fill() method.\n"); }

struct Color* blue_create(void) {
    struct Color* color = (struct Color*)calloc(1, sizeof(struct Color));
    if (NULL == color) return NULL;

    color->fill = color_fill;
    return color;
}
