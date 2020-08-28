/**
 * @file Keyboard.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef KEYBOARD_H_
#define KEYBOARD_H_

#include "ComputerPart.h"
class Keyboard : public ComputerPart, public std::enable_shared_from_this<Keyboard> {
   public:
    Keyboard() = default;
    virtual ~Keyboard() = default;
    void Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) override;
};

#endif  // KEYBOARD_H_
