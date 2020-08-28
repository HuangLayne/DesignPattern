/**
 * @file RealCustomer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-25
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef REAL_CUSTOMER_H_
#define REAL_CUSTOMER_H_

#include "AbstractCustomer.h"

class RealCustomer : public AbstractCustomer {
   public:
    RealCustomer(std::string name) { name_ = name; }
    virtual ~RealCustomer() = default;
    bool IsNil() override { return false; }
    std::string GetName() override { return name_; }
};

#endif  // REAL_CUSTOMER_H_
