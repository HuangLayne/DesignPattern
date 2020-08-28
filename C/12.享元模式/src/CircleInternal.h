/**
 * @file CircleInternal.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CIRCLE_INTERNAL_H_
#define CIRCLE_INTERNAL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Circle.h"

Circle* circle_create(const char* color);
void circle_destroy(Circle** circle);

#ifdef __cplusplus
}
#endif
#endif  // CIRCLE_INTERNAL_H_
