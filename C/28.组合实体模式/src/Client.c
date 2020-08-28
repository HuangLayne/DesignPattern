/**
 * @file Client.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Client.h"

#include <stdio.h>

#include "CompositeEntity.h"
#include "ctools.h"

struct Client {
    CompositeEntity* composite_entity;
};

Client* client_create(void) {
    Client* client = (Client*)calloc(1, sizeof(Client));
    if (NULL == client) return NULL;

    client->composite_entity = composite_entity_create();
    return client;
}

void client_destroy(Client** client) {
    if (NULL == client || NULL == *client) return;
    Client* self = *client;
    composite_entity_destroy(&self->composite_entity);
    freep((void**)client);
}

void client_set_data(Client* client, const char* data1, const char* data2) {
    if (NULL == client) return;
    composite_entity_set_data(client->composite_entity, data1, data2);
}

void client_print_data(Client* client) {
    if (NULL == client) return;
    int data_length;
    const char** data = composite_entity_get_data(client->composite_entity, &data_length);
    for (int i = 0; i < data_length; ++i) {
        printf("Data: %s\n", data[i]);
    }
    free(data);
}
