/**
 * @file Subject.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Subject.h"

Subject::Subject() {}

Subject::~Subject() { observer_list_.clear(); }

void Subject::SetState(const int state) {
    state_ = state;
    NotifyAllObservers();
}

int Subject::GetState() { return state_; }

void Subject::Attach(Observer* observer) { observer_list_.push_back(observer); }

void Subject::NotifyAllObservers() {
    for (auto iter : observer_list_) {
        iter->Update();
    }
}
