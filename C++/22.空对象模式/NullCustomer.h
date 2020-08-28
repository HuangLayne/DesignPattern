/**
 * @file NullCustomer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-25
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef NULL_CUSTOMER_H_
#define NULL_CUSTOMER_H_

#include "AbstractCustomer.h"

class NullCustomer : public AbstractCustomer {
   public:
    NullCustomer() = default;
    virtual ~NullCustomer() = default;
    bool IsNil() override { return true; }
    std::string GetName() override { return "Not Available in Customer Database"; }
};

#endif  // NULL_CUSTOMER_H_
