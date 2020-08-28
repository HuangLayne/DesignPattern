/**
 * @file Shape.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef SHAPE_H_
#define SHAPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef struct Shape Shape;

void shape_set_id(Shape* shape, const int64_t id);

int64_t shape_get_id(Shape* shape);

const char* shape_get_type(Shape* shape);

void shape_draw(Shape* shape);

Shape* shape_clone(Shape* shape);

void shape_destory(Shape** shape);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_H_
