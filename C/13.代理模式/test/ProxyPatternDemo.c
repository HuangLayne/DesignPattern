/**
 * @file ProxyPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Image.h"

int main(int argc, char const* argv[]) {
    Image* image = proxy_image_create("test_10mb.jpg");

    // 图像将从磁盘加载
    image_display(image);
    printf("\n");

    // 图像不需要从磁盘加载
    image_display(image);

    image_destroy(&image);

    return 0;
}
