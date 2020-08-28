/**
 * @file State.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STATE_H_
#define STATE_H_

#include <string>

class Context;
class State {
   public:
    State() = default;
    virtual ~State() = default;
    virtual void DoAction(std::shared_ptr<Context> context) = 0;
    virtual std::string ToString() = 0;
};

#endif  // STATE_H_
