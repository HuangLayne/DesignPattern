/**
 * @file Context.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <memory>

#include "Strategy.h"

class Context {
   public:
    Context(std::shared_ptr<Strategy> strategy) : strategy_(strategy) {}
    virtual ~Context() = default;
    int ExecuteStrategy(int num1, int num2) { return strategy_->DoOperation(num1, num2); }

   private:
    std::shared_ptr<Strategy> strategy_;
};

#endif  // CONTEXT_H_
