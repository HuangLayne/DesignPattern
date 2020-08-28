/**
 * @file RealImage.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ImageStruct.h"
#include "ctools.h"

typedef struct {
    const char* file_name;
} priv_t;

static void load_from_disk(const char* file_name) { printf("Loading %s\n", file_name); }

static void init(struct Image* image, const char* file_name) {
    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    priv->file_name = cstrdup(file_name);
    load_from_disk(file_name);
    image->priv = priv;
}

static void display(struct Image* image) {
    priv_t* priv = (priv_t*)image->priv;
    if (NULL == priv) return;
    printf("Displaying %s\n", priv->file_name);
}

static void destroy(struct Image* image) {
    priv_t* priv = (priv_t*)image->priv;
    if (NULL == priv) return;
    freep((void**)&priv->file_name);
    freep((void**)&priv);
}

struct Image* real_image_create(const char* file_name) {
    struct Image* image = (struct Image*)calloc(1, sizeof(struct Image));
    if (NULL == image) return NULL;

    init(image, file_name);
    image->display = display;
    image->destroy = destroy;
    return image;
}
