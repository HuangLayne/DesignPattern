/**
 * @file StrategyPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>

#include "Context.h"
#include "OperationAdd.h"
#include "OperationMultiply.h"
#include "OperationSubstract.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Context> context1 = std::make_shared<Context>(std::make_shared<OperationAdd>());
    std::cout << "10 + 5 = " << context1->ExecuteStrategy(10, 5) << std::endl;

    std::shared_ptr<Context> context2 = std::make_shared<Context>(std::make_shared<OperationSubstract>());
    std::cout << "10 - 5 = " << context2->ExecuteStrategy(10, 5) << std::endl;

    std::shared_ptr<Context> context3 = std::make_shared<Context>(std::make_shared<OperationMultiply>());
    std::cout << "10 * 5 = " << context3->ExecuteStrategy(10, 5) << std::endl;
    return 0;
}
