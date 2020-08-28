/**
 * @file FilterChain.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FILTER_CHAIN_H_
#define FILTER_CHAIN_H_

#include <list>
#include <memory>

#include "Filter.h"
#include "Target.h"

class FilterChain {
   public:
    FilterChain() = default;
    ~FilterChain() { filters_.clear(); }

    void AddFilter(std::shared_ptr<Filter> filter) { filters_.push_back(filter); }

    void Execute(std::string request) {
        for (auto filter : filters_) {
            filter->Execute(request);
        }
        target_->Execute(request);
    }
    void SetTarget(std::shared_ptr<Target> target) { target_ = target; }

   private:
    std::list<std::shared_ptr<Filter>> filters_;
    std::shared_ptr<Target> target_ = nullptr;
};

#endif  // FILTER_CHAIN_H_
