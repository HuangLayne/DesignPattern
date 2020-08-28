/**
 * @file VisitorPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Computer.h"
#include "ComputerPartDisplayVisitor.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<ComputerPart> computer = std::make_shared<Computer>();
    std::shared_ptr<ComputerPartDisplayVisitor> computer_part_display_visitor =
        std::make_shared<ComputerPartDisplayVisitor>();
    computer->Accept(computer_part_display_visitor);
    return 0;
}

// g++ -std=c++11 -g VisitorPatternDemo.cpp Computer.cpp ComputerPartDisplayVisitor.cpp Keyboard.cpp Monitor.cpp
// Mouse.cpp -o VisitorPatternDemo
