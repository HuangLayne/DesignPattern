/**
 * @file ComputerPart.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COMPUTER_PART_H_
#define COMPUTER_PART_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ComputerPartVisitor.h"

ComputerPart* computer_part_create_computer(void);

void computer_part_destroy(ComputerPart** computer_part);

void computer_part_accept(ComputerPart* computer_part, ComputerPartVisitor* computer_part_visitor);

#ifdef __cplusplus
}
#endif
#endif  // COMPUTER_PART_H_
