/**
 * @file PackingStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef PACKING_STRUCT_H_
#define PACKING_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Packing {
    void* priv;

    const char* (*pack)(struct Packing* packing);
    void (*destroy)(struct Packing* packing);
};

#ifdef __cplusplus
}
#endif
#endif  // PACKING_STRUCT_H_
