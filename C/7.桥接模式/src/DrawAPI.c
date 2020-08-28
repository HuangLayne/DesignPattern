/**
 * @file DrawAPI.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "DrawAPI.h"

#include "DrawAPIStruct.h"
#include "mem.h"

void draw_api_destroy(DrawAPI** draw_api) {
    if (NULL == draw_api || NULL == *draw_api) return;

    if (NULL != (*draw_api)->destroy) {
        (*draw_api)->destroy(*draw_api);
    }
    free(*draw_api);
    *draw_api = NULL;
}
