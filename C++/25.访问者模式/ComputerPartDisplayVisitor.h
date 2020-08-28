/**
 * @file ComputerPartDisplayVisitor.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COMPUTER_PART_DISPLAY_VISITOR_H_
#define COMPUTER_PART_DISPLAY_VISITOR_H_

#include "ComputerPartVisitor.h"
class ComputerPartDisplayVisitor : public ComputerPartVisitor {
   public:
    ComputerPartDisplayVisitor() = default;
    virtual ~ComputerPartDisplayVisitor() = default;
    void Visit(std::shared_ptr<Computer> computer) override;
    void Visit(std::shared_ptr<Mouse> mouse) override;
    void Visit(std::shared_ptr<Keyboard> keyboard) override;
    void Visit(std::shared_ptr<Monitor> monitor) override;
};

#endif  // COMPUTER_PART_DISPLAY_VISITOR_H_
