/**
 * @file Student.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Student.h"

#include "ctools.h"

struct Student {
    const char* name;
    const char* roll_number;
};

Student* student_create(void) {
    Student* student = (Student*)calloc(1, sizeof(Student));
    return student;
}

void student_destroy(Student** student) {
    if (NULL == student || NULL == *student) return;
    Student* self = *student;
    freep((void**)&self->name);
    freep((void**)&self->roll_number);
    freep((void**)student);
}

const char* student_get_roll_number(Student* student) {
    if (NULL == student) return NULL;
    return student->roll_number;
}

void student_set_roll_number(Student* student, const char* roll_number) {
    if (NULL == student) return;
    freep((void**)&student->roll_number);
    student->roll_number = cstrdup(roll_number);
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
