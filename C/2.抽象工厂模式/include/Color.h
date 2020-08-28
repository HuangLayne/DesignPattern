/**
 * @file Color.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COLOR_H_
#define COLOR_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Color Color;

void color_fill(Color* color);

void color_destory(Color** color);

#ifdef __cplusplus
}
#endif
#endif  // COLOR_H_
