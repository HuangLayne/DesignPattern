/**
 * @file Computer.cpp
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
#include "Keyboard.h"
#include "Monitor.h"
#include "Mouse.h"

Computer::Computer() {
    std::shared_ptr<ComputerPart> mouse = std::make_shared<Mouse>();
    std::shared_ptr<ComputerPart> keyboard = std::make_shared<Keyboard>();
    std::shared_ptr<ComputerPart> monitor = std::make_shared<Monitor>();

    parts_.push_back(mouse);
    parts_.push_back(keyboard);
    parts_.push_back(monitor);
}

Computer::~Computer() { parts_.clear(); }

void Computer::Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) {
    for (auto part : parts_) {
        part->Accept(computer_part_visitor);
    }
    computer_part_visitor->Visit(shared_from_this());
}
