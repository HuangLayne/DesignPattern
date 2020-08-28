/**
 * @file Target.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Target.h"

#include <stdio.h>

#include "ctools.h"

struct Target {
    /* data */
};

Target* target_create(void) {
    Target* target = (Target*)calloc(1, sizeof(Target));
    return target;
}

void target_destroy(Target** target) {
    if (NULL == target || NULL == *target) return;
    freep((void**)target);
}

void target_execute(Target* target, const char* request) { printf("Executing request: %s\n", request); }
