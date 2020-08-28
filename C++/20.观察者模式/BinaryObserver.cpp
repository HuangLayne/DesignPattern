/**
 * @file BinaryObserver.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "BinaryObserver.h"

#include <bitset>
#include <iostream>

#include "Subject.h"

BinaryObserver::BinaryObserver(std::shared_ptr<Subject> subject) {
    subject_ = subject;
    subject_->Attach(this);
}

BinaryObserver::~BinaryObserver() {}

void BinaryObserver::Update() { std::cout << "Binary String: " << std::bitset<32>(subject_->GetState()) << std::endl; }
