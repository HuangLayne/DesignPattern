/**
 * @file Monitor.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-29
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MONITOR_H_
#define MONITOR_H_

#include "ComputerPart.h"
class Monitor : public ComputerPart, public std::enable_shared_from_this<Monitor> {
   public:
    Monitor() = default;
    virtual ~Monitor() = default;
    void Accept(std::shared_ptr<ComputerPartVisitor> computer_part_visitor) override;
};

#endif  // MONITOR_H_
