/**
 * @file SellStock.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef SELL_STOCK_H_
#define SELL_STOCK_H_

#include <memory>

#include "Order.h"
#include "Stock.h"

class SellStock : public Order {
   public:
    SellStock(std::shared_ptr<Stock> abc_stock) : abc_stock_(abc_stock) {}
    ~SellStock() = default;
    void Execute() override { abc_stock_->Sell(); }

   private:
    std::shared_ptr<Stock> abc_stock_;
};

#endif  // SELL_STOCK_H_
