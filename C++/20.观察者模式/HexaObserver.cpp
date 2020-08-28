/**
 * @file HexaObserver.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "HexaObserver.h"

#include <bitset>
#include <iostream>

#include "Subject.h"

HexaObserver::HexaObserver(std::shared_ptr<Subject> subject) {
    subject_ = subject;
    subject_->Attach(this);
}

HexaObserver::~HexaObserver() {}

void HexaObserver::Update() { std::cout << "Hex String: " << std::hex << subject_->GetState() << std::endl; }
