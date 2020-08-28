/**
 * @file CompositeEntityPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "StudentDao.h"

int main(int argc, char const* argv[]) {
    StudentDao* student_dao = student_dao_create();

    //输出所有的学生
    List* students = student_dao_get_all_students(student_dao);
    ListIterator* it = list_iterator_new(students, LIST_HEAD);
    ListNode* node;
    while ((node = list_iterator_next(it))) {
        Student* student = (Student*)node->val;
        printf("Student : [RollNo: %d, Name: %s]\n", student_get_roll_number(student), student_get_name(student));
    }
    list_iterator_destroy(it);

    //更新学生
    Student* student = student_dao_get_student(student_dao, 0);
    student_set_name(student, "Michael");
    student_dao_update_student(student_dao, student);

    //获取学生
    student = student_dao_get_student(student_dao, 0);
    printf("Student : [RollNo: %d, Name: %s]\n", student_get_roll_number(student), student_get_name(student));

    student_dao_destroy(&student_dao);
    return 0;
}
