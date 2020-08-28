/**
 * @file ComputerPart.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COMPUTER_PART_H_
#define COMPUTER_PART_H_

#include <memory>

class ComputerPartVisitor;
class ComputerPart {
   public:
    ComputerPart() = default;
    virtual ~ComputerPart() = default;
    virtual void Accept(std::shared_ptr<ComputerPartVisitor> computerPartVisitor) = 0;
};

#endif  // COMPUTER_PART_H_
