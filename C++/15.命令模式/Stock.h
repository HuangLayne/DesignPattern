/**
 * @file Stock.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <iostream>
#include <string>

class Stock {
   public:
    Stock() = default;
    ~Stock() = default;

    void Buy() { std::cout << "Stock [ Name: " << name_ << ", Quantity: " << quantity_ << " ] bought" << std::endl; }
    void Sell() { std::cout << "Stock [ Name: " << name_ << ", Quantity: " << quantity_ << " ] sold" << std::endl; }

   private:
    std::string name_ = "ABC";
    int quantity_ = 10;
};

#endif  // STOCK_H_
