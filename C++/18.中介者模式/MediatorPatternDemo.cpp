/**
 * @file MediatorPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "User.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<User> robert = std::make_shared<User>("Robert");
    std::shared_ptr<User> john = std::make_shared<User>("John");

    robert->SendMessage("Hi! John!");
    john->SendMessage("Hello! Robert!");

    return 0;
}

// g++ -std=c++11 -g MediatorPatternDemo.cpp ChatRoom.cpp User.cpp
// ./a.out
