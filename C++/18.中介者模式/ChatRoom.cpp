/**
 * @file ChatRoom.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <ctime>
#include <iostream>

#include "User.h"

ChatRoom::ChatRoom() {}
ChatRoom::~ChatRoom() {}

void ChatRoom::ShowMessage(User* user, std::string message) {
    time_t now = time(0);
    std::cout << ctime(&now) << " [" + user->GetName() + "] : " << message << std::endl;
}
