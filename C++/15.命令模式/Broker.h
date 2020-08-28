/**
 * @file Broker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BROKER_H_
#define BROKER_H_

#include <list>
#include <memory>

#include "Order.h"

class Broker {
   public:
    Broker() = default;
    ~Broker() = default;

    void TakeOrder(std::shared_ptr<Order> order) { order_list_.push_back(order); }
    void PlaceOrder() {
        for (auto order : order_list_) {
            order->Execute();
        }
    }

   private:
    std::list<std::shared_ptr<Order>> order_list_;
};

#endif  // BROKER_H_
