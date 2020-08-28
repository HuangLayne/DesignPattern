/**
 * @file ComputerPartVisitorStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COMPUTER_PART_VISITOR_STRUCT_H_
#define COMPUTER_PART_VISITOR_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct ComputerPart;
struct ComputerPartVisitor {
    void* priv;

    void (*visit_computer)(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* computer);
    void (*visit_mouse)(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* mouse);
    void (*visit_keyboard)(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* keyboard);
    void (*visit_monitor)(struct ComputerPartVisitor* computer_part_visitor, struct ComputerPart* monitor);
    void (*destroy)(struct ComputerPartVisitor* computer_part_visitor);
};

#ifdef __cplusplus
}
#endif
#endif  // COMPUTER_PART_VISITOR_STRUCT_H_
