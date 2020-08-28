/**
 * @file Color.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Color.h"

#include <assert.h>
#include <stdlib.h>

#include "ColorStruct.h"

void color_fill(Color* color) {
    assert(NULL != color);
    if (NULL != color->fill) color->fill(color);
}

void color_destory(Color** color) {
    if (NULL == color || NULL == *color) return;

    Color* self = *color;
    if (NULL != self->destroy) {
        self->destroy(self);
    }

    free(*color);
    *color = NULL;
}
