/**
 * @file Circle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Circle Circle;

void circle_set_x(Circle* circle, int x);
void circle_set_y(Circle* circle, int y);
void circle_set_radius(Circle* circle, int radius);
void circle_draw(Circle* circle);

#ifdef __cplusplus
}
#endif
#endif  // CIRCLE_H_
