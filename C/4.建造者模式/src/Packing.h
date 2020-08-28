/**
 * @file Packing.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef PACKING_H_
#define PACKING_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Packing Packing;

Packing* wrapper_create(void);
Packing* bottle_create(void);
const char* packing_pack(Packing* packing);
void packing_destroy(Packing** packing);

#ifdef __cplusplus
}
#endif
#endif  // PACKING_H_
