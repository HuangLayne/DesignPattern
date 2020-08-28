/**
 * @file Order.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef ORDER_H_
#define ORDER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Stock.h"

typedef struct Order Order;

Order* buy_stock_order_create(Stock* stock);
Order* sell_stock_order_create(Stock* stock);
void order_destroy(Order* order);
void order_excute(Order* order);

#ifdef __cplusplus
}
#endif
#endif  // ORDER_H_
