/**
 * @file Context.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <memory>

#include "State.h"

class Context {
   public:
    Context();
    ~Context();
    void SetState(State* state);
    State* GetState();

   private:
    State* state_ = nullptr;
};

#endif  // CONTEXT_H_
