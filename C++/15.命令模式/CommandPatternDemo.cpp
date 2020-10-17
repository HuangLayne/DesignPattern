/**
 * @file CommandPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "Broker.h"
#include "BuyStock.h"
#include "SellStock.h"

int main(int argc, char const* argv[]) {
    std::shared_ptr<Stock> abc_stock = std::make_shared<Stock>();
    std::shared_ptr<BuyStock> buy_stock_order = std::make_shared<BuyStock>(abc_stock);
    std::shared_ptr<SellStock> sell_stock_order = std::make_shared<SellStock>(abc_stock);

    std::shared_ptr<Broker> broker = std::make_shared<Broker>();
    broker->TakeOrder(buy_stock_order);
    broker->TakeOrder(sell_stock_order);
    broker->PlaceOrder();

    return 0;
}
