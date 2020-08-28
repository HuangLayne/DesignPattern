/**
 * @file ComputerPartVisitor.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COMPUTER_PART_VISITOR_H_
#define COMPUTER_PART_VISITOR_H_

#include "Computer.h"
class Keyboard;
class Computer;
class Mouse;
class Monitor;
class ComputerPartVisitor {
   public:
    ComputerPartVisitor() = default;
    virtual ~ComputerPartVisitor() = default;
    virtual void Visit(std::shared_ptr<Computer> computer) = 0;
    virtual void Visit(std::shared_ptr<Mouse> mouse) = 0;
    virtual void Visit(std::shared_ptr<Keyboard> keyboard) = 0;
    virtual void Visit(std::shared_ptr<Monitor> monitor) = 0;
};

#endif  // COMPUTER_PART_VISITOR_H_
