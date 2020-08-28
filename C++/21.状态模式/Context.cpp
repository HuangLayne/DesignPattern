/**
 * @file Context.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-22
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Context.h"

Context::Context() {}
Context::~Context() {}

void Context::SetState(State* state) { state_ = state; }

State* Context::GetState() { return state_; }
