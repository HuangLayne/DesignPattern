/**
 * @file ComputerPartVisitor.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COMPUTER_PART_VISITOR_H_
#define COMPUTER_PART_VISITOR_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ComputerPart ComputerPart;
typedef struct ComputerPartVisitor ComputerPartVisitor;

ComputerPartVisitor* computer_part_display_visitor_create(void);

void computer_part_visitor_visit_computer(ComputerPartVisitor* computer_part_visitor, ComputerPart* computer);

void computer_part_visitor_visit_mouse(ComputerPartVisitor* computer_part_visitor, ComputerPart* mouse);

void computer_part_visitor_visit_keyboard(ComputerPartVisitor* computer_part_visitor, ComputerPart* keyboard);

void computer_part_visitor_visit_monitor(ComputerPartVisitor* computer_part_visitor, ComputerPart* monitor);

void computer_part_visitor_destroy(ComputerPartVisitor** computer_part_visitor);

#ifdef __cplusplus
}
#endif
#endif  // COMPUTER_PART_VISITOR_H_
