/**
 * @file StopState.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STOP_STATE_H_
#define STOP_STATE_H_

#include <string>

#include "State.h"

class StopState : public State {
   public:
    StopState();
    ~StopState();
    void DoAction(std::shared_ptr<Context> context) override;
    std::string ToString() override;
};

#endif  // STOP_STATE_H_
