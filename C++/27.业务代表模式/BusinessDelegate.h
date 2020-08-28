/**
 * @file BusinessDelegate.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BUSINESS_DELEGATE_H_
#define BUSINESS_DELEGATE_H_

#include "BusinessLookUp.h"
#include "BusinessService.h"

class BusinessDelegate {
   public:
    BusinessDelegate() { business_look_up_ = new BusinessLookUp(); }
    ~BusinessDelegate() {
        if (nullptr != business_look_up_) {
            delete business_look_up_;
            business_look_up_ = nullptr;
        }
    }

    void SetServiceType(std::string service_type) { service_type_ = service_type; }

    void DoTask() {
        business_service_ = business_look_up_->GetBusinessService(service_type_);
        business_service_->DoProcessing();
    }

   private:
    std::string service_type_;
    BusinessLookUp* business_look_up_ = nullptr;
    std::shared_ptr<BusinessService> business_service_ = nullptr;
};

#endif  // BUSINESS_DELEGATE_H_
