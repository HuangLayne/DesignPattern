/**
 * @file FilterStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef FILTER_STRUCT_H_
#define FILTER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Filter {
    void* priv;

    void (*execute)(struct Filter* filter, const char* request);
    void (*destroy)(struct Filter* filter);
};

#ifdef __cplusplus
}
#endif
#endif  // FILTER_STRUCT_H_
