/**
 * @file CompositeEntityPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-04
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Client.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Client> client = std::make_shared<Client>();
    client->SetData("Test", "Data");
    client->PrintData();
    client->SetData("Second Test", "Data1");
    client->PrintData();
    return 0;
}
