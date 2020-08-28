/**
 * @file ChatRoom.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CHAT_ROOM_H_
#define CHAT_ROOM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "User.h"

void chat_room_show_message(User* user, const char* message);

#ifdef __cplusplus
}
#endif
#endif  // CHAT_ROOM_H_
