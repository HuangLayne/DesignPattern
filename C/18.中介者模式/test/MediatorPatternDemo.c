/**
 * @file MediatorPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "User.h"

int main(int argc, char const* argv[]) {
    User* robert = user_create("Robert");
    User* john = user_create("John");

    user_send_message(robert, "Hi! John!");
    user_send_message(john, "Hello! Robert!");

    user_destroy(&robert);
    user_destroy(&john);
    return 0;
}
