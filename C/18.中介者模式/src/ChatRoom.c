/**
 * @file ChatRoom.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ChatRoom.h"

#include <stdio.h>
#include <time.h>

void chat_room_show_message(User* user, const char* message) {
    time_t t;
    t = time(&t);
    printf("%s[%s] : %s\n", ctime(&t), user_get_name(user), message);
}
