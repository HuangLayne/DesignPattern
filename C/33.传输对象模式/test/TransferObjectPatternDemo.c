/**
 * @file TransferObjectPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "StudentBO.h"

int main(int argc, char const* argv[]) {
    StudentBO* student_business_object = student_bo_create();

    //输出所有的学生
    List* list = student_bo_get_all_students(student_business_object);
    ListIterator* it = list_iterator_new(list, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        StudentVO* student = (StudentVO*)node->val;
        printf("Student: [RollNo : %d, Name : %s ]\n", student_vo_get_roll_number(student),
               student_vo_get_name(student));
    }
    list_iterator_destroy(it);

    //更新学生
    node = list_at(list, 0);
    StudentVO* student = (StudentVO*)node->val;
    student_vo_set_name(student, "Michael");
    student_bo_update_student(student_business_object, student);

    //获取学生
    node = list_at(list, 0);
    student = (StudentVO*)node->val;
    printf("Student: [RollNo : %d, Name : %s ]\n", student_vo_get_roll_number(student), student_vo_get_name(student));

    student_bo_destroy(&student_business_object);
    return 0;
}
