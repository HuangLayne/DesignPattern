/**
 * @file Order.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Order.h"

#include "OrderStruct.h"
#include "Stock.h"
#include "ctools.h"

void order_destroy(Order* order) {
    if (NULL == order) return;
    if (NULL != order->destroy) order->destroy(order);
    free(order);
}

void order_excute(Order* order) {
    if (NULL == order) return;
    if (NULL != order->execute) order->execute(order);
}
