/**
 * @file Filter.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Filter.h"

#include "FilterStruct.h"
#include "ctools.h"

void filter_destroy(Filter** filter) {
    if (NULL == filter || NULL == *filter) return;
    Filter* self = *filter;
    if (NULL != self->destroy) self->destroy(self);

    freep((void**)filter);
}

void filter_execute(Filter* filter, const char* request) {
    if (NULL == filter) return;
    if (NULL != filter->execute) filter->execute(filter, request);
}
