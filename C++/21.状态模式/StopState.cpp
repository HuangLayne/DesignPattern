/**
 * @file StopState.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "StopState.h"

#include <iostream>

#include "Context.h"

StopState::StopState() {}

StopState::~StopState() {}

void StopState::DoAction(std::shared_ptr<Context> context) {
    std::cout << "Player is in stop state" << std::endl;
    context->SetState(this);
}

std::string StopState::ToString() { return "Stop State"; }
