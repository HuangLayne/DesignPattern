/**
 * @file FilterManager.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FILTER_MANAGER_H_
#define FILTER_MANAGER_H_

#include "FilterChain.h"
class FilterManager {
   public:
    FilterManager(std::shared_ptr<Target> target) {
        filter_chain_ = std::make_shared<FilterChain>();
        filter_chain_->SetTarget(target);
    }
    ~FilterManager() = default;
    void SetFilter(std::shared_ptr<Filter> filter) { filter_chain_->AddFilter(filter); }

    void FilterRequest(std::string request) { filter_chain_->Execute(request); }

   private:
    std::shared_ptr<FilterChain> filter_chain_;
};

#endif  // FILTER_MANAGER_H_
