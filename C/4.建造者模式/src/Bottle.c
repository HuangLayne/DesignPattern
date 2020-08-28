/**
 * @file Bottle.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "PackingStruct.h"
#include "mem.h"

static const char* pack(struct Packing* packing) { return "Bottle"; }

struct Packing* bottle_create(void) {
    struct Packing* packing = (struct Packing*)calloc(1, sizeof(struct Packing));
    if (NULL == packing) return NULL;

    packing->pack = pack;
    return packing;
}
