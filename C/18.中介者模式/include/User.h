/**
 * @file User.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef USER_H_
#define USER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct User User;

User* user_create(const char* name);
void user_destroy(User** user);
void user_set_name(User* user, const char* name);
const char* user_get_name(User* user);
void user_send_message(User* user, const char* message);

#ifdef __cplusplus
}
#endif
#endif  // USER_H_
