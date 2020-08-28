/**
 * @file ShapeCache.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef SHAPE_CACHE_H_
#define SHAPE_CACHE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Shape.h"

void shape_cache_load_cache(void);
Shape* shape_cache_get_shape(const int64_t shape_id);

#ifdef __cplusplus
}
#endif
#endif  // SHAPE_CACHE_H_
