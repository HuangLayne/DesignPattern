/**
 * @file Client.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef Client_H_
#define Client_H_

#include "BusinessDelegate.h"

class Client {
   public:
    Client(std::shared_ptr<BusinessDelegate> business_service) { business_service_ = business_service; }
    ~Client() = default;

    void DoTask() { business_service_->DoTask(); }

   private:
    std::shared_ptr<BusinessDelegate> business_service_;
};

#endif  // Client_H_
