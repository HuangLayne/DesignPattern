/**
 * @file Cache.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CACHE_H_
#define CACHE_H_

#include <iostream>
#include <list>

#include "Service.h"

class Cache {
   public:
    Cache(/* args */) = default;
    ~Cache() { services_.clear(); }
    std::shared_ptr<Service> GetService(std::string service_name) {
        for (auto service : services_) {
            if (0 == service->GetName().compare(service_name)) {
                std::cout << "Returning cached  " << service_name << " object" << std::endl;
                return service;
            }
        }
        return nullptr;
    }

    void AddService(std::shared_ptr<Service> new_service) {
        bool exists = false;
        for (auto service : services_) {
            if (0 == service->GetName().compare(new_service->GetName())) {
                exists = true;
            }
        }
        if (!exists) {
            services_.push_back(new_service);
        }
    }

   private:
    std::list<std::shared_ptr<Service>> services_;
};

#endif  // CACHE_H_
