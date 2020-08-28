/**
 * @file BuyStock.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef BUY_STOCK_H_
#define BUY_STOCK_H_

#include <memory>

#include "Order.h"
#include "Stock.h"

class BuyStock : public Order {
   public:
    BuyStock(std::shared_ptr<Stock> abc_stock) : abc_stock_(abc_stock) {}
    ~BuyStock() = default;
    void Execute() override { abc_stock_->Buy(); }

   private:
    std::shared_ptr<Stock> abc_stock_;
};

#endif  // BUY_STOCK_H_
