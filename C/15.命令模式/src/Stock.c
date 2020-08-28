/**
 * @file Stock.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Stock.h"

#include <stdio.h>

#include "ctools.h"

struct Stock {
    const char* name;
    int quantity;
};

Stock* stock_create(void) {
    Stock* stock = (Stock*)calloc(1, sizeof(Stock));
    if (NULL == stock) return NULL;

    stock->name = "ABC";
    stock->quantity = 10;
    return stock;
}

void stock_destroy(Stock** stock) {
    if (NULL == stock || NULL == *stock) return;
    freep((void**)stock);
}

void stock_buy(Stock* stock) {
    if (NULL == stock) return;
    printf("Stock [ Name: %s, Quantity: %d ] bought\n", stock->name, stock->quantity);
}

void stock_sell(Stock* stock) {
    if (NULL == stock) return;
    printf("Stock [ Name: %s, Quantity: %d ] sold\n", stock->name, stock->quantity);
}
