/**
 * @file Order.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-14
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef ORDER_H_
#define ORDER_H_

class Order {
   public:
    Order() = default;
    virtual ~Order() = default;
    virtual void Execute() = 0;
};

#endif  // ORDER_H_
