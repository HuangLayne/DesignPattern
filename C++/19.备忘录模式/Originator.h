/**
 * @file Originator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ORIGINATOR_H_
#define ORIGINATOR_H_

#include <memory>

#include "Memento.h"

class Originator {
   public:
    Originator() = default;
    ~Originator() = default;
    void SetState(std::string state) { state_ = state; }
    std::string GetState() { return state_; }
    std::shared_ptr<Memento> SaveStateToMemento() { return std::make_shared<Memento>(state_); }
    void getStateFromMemento(std::shared_ptr<Memento> memento) { state_ = memento->GetState(); }

   private:
    std::string state_;
};

#endif  // ORIGINATOR_H_
