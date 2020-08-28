/**
 * @file ShapeFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-01
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Circle.h"

Circle* shape_factory_get_circle(const char* color);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_FACTORY_H_
