/**
 * @file Image.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Image.h"

#include "ImageStruct.h"
#include "ctools.h"

void image_destroy(Image** image) {
    if (NULL == image || NULL == *image) return;
    Image* self = *image;
    if (NULL != self->destroy) self->destroy(self);

    freep((void**)image);
}

void image_display(Image* image) {
    if (NULL == image) return;
    if (NULL != image->display) image->display(image);
}
