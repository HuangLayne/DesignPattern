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

#include "Image.h"
#include "ImageStruct.h"
#include "ctools.h"

typedef struct {
    const char* file_name;
    struct Image* real_image;
} priv_t;

static void init(struct Image* image, const char* file_name) {
    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    priv->file_name = cstrdup(file_name);
    image->priv = priv;
}

static void display(struct Image* image) {
    priv_t* priv = (priv_t*)image->priv;
    if (NULL == priv) return;

    if (NULL == priv->real_image) {
        priv->real_image = real_image_create(priv->file_name);
    }

    image_display(priv->real_image);
}

static void destroy(struct Image* image) {
    priv_t* priv = (priv_t*)image->priv;
    if (NULL == priv) return;

    image_destroy(&priv->real_image);
    freep((void**)&priv->file_name);
    freep((void**)&priv);
}

struct Image* proxy_image_create(const char* file_name) {
    struct Image* image = (struct Image*)calloc(1, sizeof(struct Image));
    if (NULL == image) return NULL;

    init(image, file_name);
    image->display = display;
    image->destroy = destroy;
    return image;
}
