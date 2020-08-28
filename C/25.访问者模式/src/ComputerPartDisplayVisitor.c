/**
 * @file ComputerPartDisplayVisitor.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ComputerPartVisitorStruct.h"
#include "ctools.h"

static void visit_computer(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* computer) {
    printf("Displaying Computer.\n");
}

static void visit_mouse(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* mouse) {
    printf("Displaying Mouse.\n");
}

static void visit_keyboard(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* keyboard) {
    printf("Displaying Keyboard.\n");
}

static void visit_monitor(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* monitor) {
    printf("Displaying Monitor.\n");
}

struct ComputerPartVisitor* computer_part_display_visitor_create(void) {
    struct ComputerPartVisitor* computer_part_display_visitor =
        (struct ComputerPartVisitor*)calloc(1, sizeof(struct ComputerPartVisitor));
    if (NULL == computer_part_display_visitor) return NULL;

    computer_part_display_visitor->visit_computer = visit_computer;
    computer_part_display_visitor->visit_mouse = visit_mouse;
    computer_part_display_visitor->visit_keyboard = visit_keyboard;
    computer_part_display_visitor->visit_monitor = visit_monitor;
    return computer_part_display_visitor;
}
