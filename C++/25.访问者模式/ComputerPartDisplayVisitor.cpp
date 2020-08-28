/**
 * @file ComputerPartDisplayVisitor.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ComputerPartDisplayVisitor.h"

#include <iostream>

#include "Computer.h"
#include "Keyboard.h"
#include "Monitor.h"
#include "Mouse.h"

void ComputerPartDisplayVisitor::Visit(std::shared_ptr<Computer> computer) {
    std::cout << "Displaying Computer." << std::endl;
}

void ComputerPartDisplayVisitor::Visit(std::shared_ptr<Mouse> mouse) { std::cout << "Displaying Mouse." << std::endl; }

void ComputerPartDisplayVisitor::Visit(std::shared_ptr<Keyboard> keyboard) {
    std::cout << "Displaying Keyboard." << std::endl;
}

void ComputerPartDisplayVisitor::Visit(std::shared_ptr<Monitor> monitor) {
    std::cout << "Displaying Monitor." << std::endl;
}
