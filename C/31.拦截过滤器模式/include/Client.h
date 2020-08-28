/**
 * @file Client.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "FilterManager.h"

typedef struct Client Client;

Client* client_create(void);

void client_destroy(Client** client);

void client_set_filter_manager(Client* client, FilterManager* filter_manager);

void client_send_request(Client* client, const char* request);

#ifdef __cplusplus
}
#endif
#endif  // CLIENT_H_
