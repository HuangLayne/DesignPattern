/**
 * @file Student.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Student.h"

#include "ctools.h"

struct Student {
    const char* name;
    int roll_number;
};

Student* student_create(const char* name, int roll_number) {
    Student* student = (Student*)calloc(1, sizeof(Student));
    if (NULL == student) return NULL;
    student->name = cstrdup(name);
    student->roll_number = roll_number;
    return student;
}

void student_destroy(Student** student) {
    if (NULL == student || NULL == *student) return;
    freep((void**)&(*student)->name);
    freep((void**)student);
}

void student_free_func(Student* student) {
    if (NULL == student) return;
    freep((void**)&student->name);
    free(student);
}

const char* student_get_name(Student* student) {
    if (NULL == student) return NULL;
    return student->name;
}

void student_set_name(Student* student, const char* name) {
    if (NULL == student) return;
    freep((void**)&student->name);
    student->name = cstrdup(name);
}

int student_get_roll_number(Student* student) {
    if (NULL == student) return INT32_MIN;
    return student->roll_number;
}

void student_set_roll_number(Student* student, int roll_number) {
    if (NULL == student) return;
    student->roll_number = roll_number;
}
