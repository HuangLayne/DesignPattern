/**
 * @file Item.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-18
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ItemStruct.h"
#include "mem.h"

const char* item_name(struct Item* item) {
    if (NULL == item || NULL == item->name) return NULL;
    return item->name(item);
}

struct Packing* item_packing(struct Item* item) {
    if (NULL == item || NULL == item->name) return NULL;
    return item->packing(item);
}

float item_price(struct Item* item) {
    if (NULL == item || NULL == item->price) return 0.0f;
    return item->price(item);
}

void item_destroy(struct Item* item) {
    if (NULL == item) return;
    if (NULL != item->child_destory) item->child_destory(item->child);
    if (NULL != item->destroy) item->destroy(item);
    memset(item, 0, sizeof(*item));
    free(item);
}
