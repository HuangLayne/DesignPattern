/**
 * @file InterceptingFilterDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Client.h"

int main(int argc, char const* argv[]) {
    Target* target = target_create();
    Filter* authentication_filter = authentication_filter_create();
    Filter* debug_filter = debug_filter_create();
    FilterManager* filter_manager = filter_manager_create(target);
    filter_manager_set_filter(filter_manager, authentication_filter);
    filter_manager_set_filter(filter_manager, debug_filter);

    Client* client = client_create();
    client_set_filter_manager(client, filter_manager);
    client_send_request(client, "HOME");

    client_destroy(&client);
    filter_destroy(&authentication_filter);
    filter_destroy(&debug_filter);
    filter_manager_destroy(&filter_manager);
    target_destroy(&target);
    return 0;
}
