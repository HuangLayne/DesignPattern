/**
 * @file Packing.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Packing.h"

#include "PackingStruct.h"
#include "mem.h"

const char* packing_pack(Packing* packing) {
    if (NULL == packing || NULL == packing->pack) return NULL;
    return packing->pack(packing);
}

void packing_destroy(Packing** packing) {
    if (NULL == packing || NULL == *packing) return;

    Packing* self = *packing;
    if (NULL != self->destroy) self->destroy(self);
    freep((void**)packing);
}
