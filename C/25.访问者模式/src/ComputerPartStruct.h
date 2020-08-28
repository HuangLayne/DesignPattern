/**
 * @file ComputerPartStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COMPUTER_PART_STRUCT_H_
#define COMPUTER_PART_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct ComputerPartVisitor;
struct ComputerPart {
    void* priv;

    void (*accept)(struct ComputerPart* computer_part, struct ComputerPartVisitor* computer_part_visitor);
    void (*destroy)(struct ComputerPart* computer_part);
};

#ifdef __cplusplus
}
#endif
#endif  // COMPUTER_PART_STRUCT_H_
