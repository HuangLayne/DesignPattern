/**
 * @file StartState.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef START_STATE_H_
#define START_STATE_H_

#include "State.h"

class StartState : State {
   public:
    StartState();
    ~StartState();
    void DoAction(std::shared_ptr<Context> context) override;
    std::string ToString() override;
};

#endif  // START_STATE_H_
