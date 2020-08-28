/**
 * @file AbstractCustomer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-25
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ABSTRACT_CUSTOMER_H_
#define ABSTRACT_CUSTOMER_H_

#include <string>

class AbstractCustomer {
   public:
    AbstractCustomer() = default;
    virtual ~AbstractCustomer() = default;
    virtual bool IsNil() = 0;
    virtual std::string GetName() = 0;

   protected:
    std::string name_;
};

#endif  // ABSTRACT_CUSTOMER_H_
