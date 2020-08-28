/**
 * @file NullPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-25
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>

#include "CustomerFactory.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<AbstractCustomer> customer1 = CustomerFactory::GetCustomer("Rob");
    std::shared_ptr<AbstractCustomer> customer2 = CustomerFactory::GetCustomer("Bob");
    std::shared_ptr<AbstractCustomer> customer3 = CustomerFactory::GetCustomer("Julie");
    std::shared_ptr<AbstractCustomer> customer4 = CustomerFactory::GetCustomer("Laura");

    std::cout << "Customers" << std::endl;
    std::cout << customer1->GetName() << std::endl;
    std::cout << customer2->GetName() << std::endl;
    std::cout << customer3->GetName() << std::endl;
    std::cout << customer4->GetName() << std::endl;

    return 0;
}
