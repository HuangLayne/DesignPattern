/**
 * @file ColorStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef COLOR_STRUCT_H_
#define COLOR_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Color {
    void* priv;

    void (*fill)(struct Color* color);
    void (*destroy)(struct Color* color);
};

#ifdef __cplusplus
}
#endif
#endif  // COLOR_STRUCT_H_
