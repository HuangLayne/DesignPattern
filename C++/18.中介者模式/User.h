/**
 * @file User.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef USER_H_
#define USER_H_

#include "ChatRoom.h"

class User {
   public:
    User(std::string name);
    ~User();

    void SetName(std::string name);
    std::string GetName();
    void SendMessage(std::string message);

   private:
    std::string name_;
};

#endif  // USER_H_
