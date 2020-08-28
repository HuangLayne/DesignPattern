/**
 * @file CommandPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Broker.h"
#include "Order.h"
#include "Stock.h"

int main(int argc, char const* argv[]) {
    Stock* abc_stock = stock_create();

    Order* buy_stock_order = buy_stock_order_create(abc_stock);
    Order* sell_stock_order = sell_stock_order_create(abc_stock);

    Broker* broker = broker_create();
    broker_take_order(broker, buy_stock_order);
    broker_take_order(broker, sell_stock_order);
    broker_place_orders(broker);

    broker_destroy(&broker);
    stock_destroy(&abc_stock);

    return 0;
}
