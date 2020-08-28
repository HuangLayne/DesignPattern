/**
 * @file Filter.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef FILTER_H_
#define FILTER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Filter Filter;

Filter* authentication_filter_create(void);

Filter* debug_filter_create(void);

void filter_destroy(Filter** filter);

void filter_execute(Filter* filter, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // FILTER_H_
