/**
 * @file PrototypePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-19
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ShapeCache.h"

int main(int argc, char const* argv[]) {
    shape_cache_load_cache();

    Shape* cloned_shape = shape_cache_get_shape(1);
    printf("Shape : %s\n", shape_get_type(cloned_shape));
    shape_destory(&cloned_shape);

    Shape* cloned_shape2 = shape_cache_get_shape(2);
    printf("Shape : %s\n", shape_get_type(cloned_shape2));
    shape_destory(&cloned_shape2);

    Shape* cloned_shape3 = shape_cache_get_shape(3);
    printf("Shape : %s\n", shape_get_type(cloned_shape3));
    shape_destory(&cloned_shape3);
    return 0;
}
