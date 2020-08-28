/**
 * @file ShapeFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Shape.h"

Shape* shape_factory_get_shape(const char* shape_type);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_FACTORY_H_
