/**
 * @file CompositePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-07
 *
 * @copyright Copyright (c) 2019
 *
 */
#include <iostream>

#include "Employee.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Employee> CEO = std::make_shared<Employee>("John", "CEO", 30000);
    std::shared_ptr<Employee> headSales = std::make_shared<Employee>("Robert", "Head Sales", 20000);
    std::shared_ptr<Employee> headMarketing = std::make_shared<Employee>("Michel", "Head Marketing", 20000);
    std::shared_ptr<Employee> clerk1 = std::make_shared<Employee>("Laura", "Marketing", 10000);
    std::shared_ptr<Employee> clerk2 = std::make_shared<Employee>("Bob", "Marketing", 10000);
    std::shared_ptr<Employee> salesExecutive1 = std::make_shared<Employee>("Richard", "Sales", 10000);
    std::shared_ptr<Employee> salesExecutive2 = std::make_shared<Employee>("Rob", "Sales", 10000);

    CEO->Add(headSales);
    CEO->Add(headMarketing);

    headSales->Add(salesExecutive1);
    headSales->Add(salesExecutive2);

    headMarketing->Add(clerk1);
    headMarketing->Add(clerk2);

    // 打印该组织的所有员工
    std::cout << CEO->ToString() << std::endl;
    for (auto head_employee : *CEO->GetSubordinates()) {
        std::cout << head_employee->ToString() << std::endl;
        for (auto employee : *head_employee->GetSubordinates()) {
            std::cout << employee->ToString() << std::endl;
        }
    }

    return 0;
}
