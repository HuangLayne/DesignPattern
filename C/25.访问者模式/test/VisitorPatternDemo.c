/**
 * @file VisitorPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ComputerPart.h"
#include "ComputerPartVisitor.h"

int main(int argc, char const* argv[]) {
    ComputerPart* computer = computer_part_create_computer();
    ComputerPartVisitor* computer_part_visitor = computer_part_display_visitor_create();
    computer_part_accept(computer, computer_part_visitor);
    computer_part_destroy(&computer);
    computer_part_visitor_destroy(&computer_part_visitor);

    return 0;
}
