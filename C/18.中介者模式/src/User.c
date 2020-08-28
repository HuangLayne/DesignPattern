/**
 * @file User.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "User.h"

#include "ChatRoom.h"
#include "ctools.h"

struct User {
    const char* name;
};

User* user_create(const char* name) {
    User* user = (User*)calloc(1, sizeof(User));
    if (NULL == user) return NULL;

    user->name = cstrdup(name);
    return user;
}

void user_destroy(User** user) {
    if (NULL == user || NULL == *user) return;
    freep((void**)&(*user)->name);
    freep((void**)user);
}

void user_set_name(User* user, const char* name) {
    if (NULL == user) return;
    freep((void**)&user->name);
    user->name = cstrdup(name);
}

const char* user_get_name(User* user) {
    if (NULL == user) return NULL;
    return user->name;
}

void user_send_message(User* user, const char* message) { chat_room_show_message(user, message); }
