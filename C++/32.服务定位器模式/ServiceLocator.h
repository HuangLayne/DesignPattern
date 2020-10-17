/**
 * @file ServiceLocator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SERVICE_LOCATOR_H_
#define SERVICE_LOCATOR_H_

#include "Cache.h"
#include "InitialContext.h"
class ServiceLocator {
   public:
    ServiceLocator(/* args */) { cache_ = std::make_shared<Cache>(); }
    ~ServiceLocator() = default;
    std::shared_ptr<Service> GetService(std::string jndi_name) {
        std::shared_ptr<Service> service = cache_->GetService(jndi_name);
        if (nullptr != service) return service;
        std::shared_ptr<InitialContext> context = std::make_shared<InitialContext>();
        std::shared_ptr<Service> service1 = context->Lookup(jndi_name);
        cache_->AddService(service1);
        return service1;
    }

   private:
    std::shared_ptr<Cache> cache_;
};

#endif  // SERVICE_LOCATOR_H_
