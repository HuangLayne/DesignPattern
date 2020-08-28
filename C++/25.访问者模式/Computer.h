/**
 * @file Computer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COMPUTER_H_
#define COMPUTER_H_

#include <list>

#include "ComputerPart.h"

class Computer : public ComputerPart, public std::enable_shared_from_this<Computer> {
   public:
    Computer();
    virtual ~Computer();
    void Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) override;

   private:
    std::list<std::shared_ptr<ComputerPart>> parts_;
};

#endif  // COMPUTER_H_
