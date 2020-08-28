/**
 * @file BusinessLookUp.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BUSINESS_LOOK_UP_H_
#define BUSINESS_LOOK_UP_H_

#include <memory>

#include "EJBService.h"
#include "JMSService.h"
class BusinessLookUp {
   public:
    BusinessLookUp() = default;
    ~BusinessLookUp() = default;
    std::shared_ptr<BusinessService> GetBusinessService(std::string service_type) {
        if (0 == service_type.compare("EJB")) {
            return std::make_shared<EJBService>();
        } else {
            return std::make_shared<JMSService>();
        }
    }
};

#endif  // BUSINESS_LOOK_UP_H_
