/**
 * @file Monitor.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Monitor.h"

#include "ComputerPartDisplayVisitor.h"

void Monitor::Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) {
    computer_part_visitor->Visit(shared_from_this());
}
