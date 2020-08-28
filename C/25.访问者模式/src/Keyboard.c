/**
 * @file Keyboard.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ComputerPartStruct.h"
#include "ComputerPartVisitor.h"
#include "ctools.h"

static void accept(struct ComputerPart* computer_part, struct ComputerPartVisitor* computer_part_visitor) {
    computer_part_visitor_visit_keyboard(computer_part_visitor, computer_part);
}

struct ComputerPart* computer_part_create_keyboard(void) {
    struct ComputerPart* computer_part = (struct ComputerPart*)calloc(1, sizeof(struct ComputerPart));
    if (NULL == computer_part) return NULL;

    computer_part->accept = accept;
    return computer_part;
}
