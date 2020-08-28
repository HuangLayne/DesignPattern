/**
 * @file ObserverPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>

#include "BinaryObserver.h"
#include "HexaObserver.h"
#include "OctalObserver.h"
#include "Subject.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Subject> subject = std::make_shared<Subject>();
    std::shared_ptr<HexaObserver> hexa_observer = std::make_shared<HexaObserver>(subject);
    std::shared_ptr<OctalObserver> octal_observer = std::make_shared<OctalObserver>(subject);
    std::shared_ptr<BinaryObserver> binary_observer = std::make_shared<BinaryObserver>(subject);

    std::cout << "First state change: 15" << std::endl;
    subject->SetState(15);
    std::cout << "Second state change: 10" << std::endl;
    subject->SetState(10);

    return 0;
}

// g++ -std=c++11 -g Subject.cpp ObserverPatternDemo.cpp BinaryObserver.cpp
// OctalObserver.cpp HexaObserver.cpp -o ObserverPatternDemo
