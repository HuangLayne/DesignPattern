/**
 * @file ComputerPartVisitor.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ComputerPartVisitor.h"

#include "ComputerPartVisitorStruct.h"
#include "ctools.h"

void computer_part_visitor_destroy(ComputerPartVisitor** computer_part_visitor) {
    if (NULL == computer_part_visitor || NULL == *computer_part_visitor) return;
    if (NULL != (*computer_part_visitor)->destroy) {
        (*computer_part_visitor)->destroy(*computer_part_visitor);
    }
    freep((void**)computer_part_visitor);
}

void computer_part_visitor_visit_computer(ComputerPartVisitor* computer_part_visitor, ComputerPart* computer) {
    if (NULL == computer_part_visitor || NULL == computer_part_visitor->visit_computer) return;
    computer_part_visitor->visit_computer(computer_part_visitor, computer);
}

void computer_part_visitor_visit_mouse(ComputerPartVisitor* computer_part_visitor, ComputerPart* mouse) {
    if (NULL == computer_part_visitor || NULL == computer_part_visitor->visit_mouse) return;
    computer_part_visitor->visit_mouse(computer_part_visitor, mouse);
}

void computer_part_visitor_visit_keyboard(ComputerPartVisitor* computer_part_visitor, ComputerPart* keyboard) {
    if (NULL == computer_part_visitor || NULL == computer_part_visitor->visit_keyboard) return;
    computer_part_visitor->visit_keyboard(computer_part_visitor, keyboard);
}

void computer_part_visitor_visit_monitor(ComputerPartVisitor* computer_part_visitor, ComputerPart* monitor) {
    if (NULL == computer_part_visitor || NULL == computer_part_visitor->visit_monitor) return;
    computer_part_visitor->visit_monitor(computer_part_visitor, monitor);
}
