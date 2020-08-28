/**
 * @file ComputerPart.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ComputerPart.h"

#include "ComputerPartStruct.h"
#include "ctools.h"

void computer_part_destroy(ComputerPart** computer_part) {
    if (NULL == computer_part || NULL == computer_part) return;
    if (NULL != (*computer_part)->destroy) {
        (*computer_part)->destroy(*computer_part);
    }
    freep((void**)computer_part);
}

void computer_part_accept(ComputerPart* computer_part, ComputerPartVisitor* computer_part_visitor) {
    if (NULL == computer_part || NULL == computer_part->accept) return;
    computer_part->accept(computer_part, computer_part_visitor);
}
