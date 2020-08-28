/**
 * @file OctalObserver.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "OctalObserver.h"

#include <bitset>
#include <iostream>

#include "Subject.h"

OctalObserver::OctalObserver(std::shared_ptr<Subject> subject) {
    subject_ = subject;
    subject_->Attach(this);
}

OctalObserver::~OctalObserver() {}

void OctalObserver::Update() { std::cout << "Octal String: " << std::oct << subject_->GetState() << std::endl; }
