/**
 * @file BusinessDelegatePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "BusinessDelegate.h"
#include "Client.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<BusinessDelegate> business_delegate = std::make_shared<BusinessDelegate>();
    business_delegate->SetServiceType("EJB");

    std::shared_ptr<Client> client = std::make_shared<Client>(business_delegate);
    client->DoTask();

    business_delegate->SetServiceType("JSM");
    client->DoTask();
    return 0;
}
