/**
 * @file User.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "User.h"

User::User(std::string name) : name_(name) {}

User::~User() {}

void User::SetName(std::string name) { name_ = name; }

std::string User::GetName() { return name_; }

void User::SendMessage(std::string message) { ChatRoom::ShowMessage(this, message); }
