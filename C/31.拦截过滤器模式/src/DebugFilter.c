/**
 * @file DebugFilter.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "FilterStruct.h"
#include "ctools.h"

static void execute(struct Filter* filter, const char* request) { printf("request log: %s\n", request); }

struct Filter* debug_filter_create(void) {
    struct Filter* filter = (struct Filter*)calloc(1, sizeof(struct Filter));
    if (NULL == filter) return NULL;

    filter->execute = execute;
    return filter;
}
