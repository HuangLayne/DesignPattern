/**
 * @file Image.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Image Image;

Image* real_image_create(const char* file_name);
Image* proxy_image_create(const char* file_name);
void image_destroy(Image** image);
void image_display(Image* image);

#ifdef __cplusplus
}
#endif
#endif  // IMAGE_H_
