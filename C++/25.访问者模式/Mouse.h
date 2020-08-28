/**
 * @file Mouse.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef Mouse_H_
#define Mouse_H_

#include "ComputerPart.h"

class Mouse : public ComputerPart, public std::enable_shared_from_this<Mouse> {
   public:
    Mouse() = default;
    virtual ~Mouse() = default;
    void Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) override;
};

#endif  // Mouse_H_
