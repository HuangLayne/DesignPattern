/**
 * @file InterceptingFilterDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "AuthenticationFilter.h"
#include "Client.h"
#include "DebugFilter.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Target> target = std::make_shared<Target>();
    std::shared_ptr<AuthenticationFilter> filter1 = std::make_shared<AuthenticationFilter>();
    std::shared_ptr<DebugFilter> filter2 = std::make_shared<DebugFilter>();

    std::shared_ptr<FilterManager> filter_manager = std::make_shared<FilterManager>(target);
    filter_manager->SetFilter(filter1);
    filter_manager->SetFilter(filter2);

    std::shared_ptr<Client> client = std::make_shared<Client>();
    client->SetFilterManager(filter_manager);
    client->SendRequest("HOME");

    return 0;
}
