/**
 * @file StartState.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "StartState.h"

#include <iostream>

#include "Context.h"

StartState::StartState() {}
StartState::~StartState() {}
void StartState::DoAction(std::shared_ptr<Context> context) {
    std::cout << "Player is in start state" << std::endl;
    context->SetState(this);
}
std::string StartState::ToString() { return "Start State"; }
