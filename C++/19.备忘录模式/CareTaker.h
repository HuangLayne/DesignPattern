/**
 * @file CareTaker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CARE_TAKER_H_
#define CARE_TAKER_H_

#include <vector>

#include "Memento.h"

class CareTaker {
   public:
    CareTaker() = default;
    ~CareTaker() { memento_list_.clear(); }

    void Add(const std::shared_ptr<Memento> state) { memento_list_.push_back(state); }

    std::shared_ptr<Memento> Get(const int index) { return memento_list_[index]; }

   private:
    std::vector<std::shared_ptr<Memento>> memento_list_;
};

#endif  // CARE_TAKER_H_
