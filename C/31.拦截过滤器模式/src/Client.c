/**
 * @file Client.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Client.h"

#include "FilterManager.h"
#include "ctools.h"

struct Client {
    FilterManager* filter_manager;
};

Client* client_create(void) {
    Client* client = (Client*)calloc(1, sizeof(Client));
    return client;
}

void client_destroy(Client** client) {
    if (NULL == client || NULL == *client) return;
    freep((void**)client);
}

void client_set_filter_manager(Client* client, FilterManager* filter_manager) {
    if (NULL == client) return;
    client->filter_manager = filter_manager;
}

void client_send_request(Client* client, const char* request) {
    if (NULL == client) return;
    filter_manager_filter_request(client->filter_manager, request);
}
