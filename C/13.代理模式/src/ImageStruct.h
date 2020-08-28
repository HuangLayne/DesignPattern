/**
 * @file ImageStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef IMAGE_STRUCT_H_
#define IMAGE_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Image {
    void* priv;

    void (*display)(struct Image* image);
    void (*destroy)(struct Image* image);
};

#ifdef __cplusplus
}
#endif
#endif  // IMAGE_STRUCT_H_
