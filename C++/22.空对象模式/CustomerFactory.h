/**
 * @file CustomerFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-25
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CUSTOMER_FACTORY_H_
#define CUSTOMER_FACTORY_H_

#include <memory>

#include "NullCustomer.h"
#include "RealCustomer.h"

class CustomerFactory {
   public:
    CustomerFactory() = default;
    ~CustomerFactory() = default;

    static std::shared_ptr<AbstractCustomer> GetCustomer(std::string name) {
        for (int i = 0; i < names_->length(); ++i) {
            if (0 == names_[i].compare(name)) {
                return std::make_shared<RealCustomer>(name);
            }
        }
        return std::make_shared<NullCustomer>();
    }

   private:
    static std::string names_[];
};

std::string CustomerFactory::names_[] = {"Rob", "Joe", "Julie"};

#endif  // CUSTOMER_FACTORY_H_
