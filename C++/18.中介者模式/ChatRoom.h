/**
 * @file ChatRoom.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CHAT_ROOM_H_
#define CHAT_ROOM_H_

#include <string>

class User;

class ChatRoom {
   public:
    ChatRoom();
    ~ChatRoom();
    static void ShowMessage(User* user, std::string message);
};

#endif  // CHAT_ROOM_H_
