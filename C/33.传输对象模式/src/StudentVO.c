/**
 * @file StudentVO.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentVO.h"

#include <stdio.h>

#include "ctools.h"

struct StudentVO {
    const char* name;
    int roll_number;
};

StudentVO* student_vo_create(const char* name, int roll_number) {
    StudentVO* student_vo = (StudentVO*)calloc(1, sizeof(StudentVO));
    if (NULL == student_vo) return NULL;
    student_vo->name = cstrdup(name);
    student_vo->roll_number = roll_number;
    return student_vo;
}

void student_vo_destroy(StudentVO** student_vo) {
    if (NULL == student_vo || NULL == *student_vo) return;
    StudentVO* self = *student_vo;
    freep((void**)self->name);
    freep((void**)student_vo);
}

void student_vo_free_func(StudentVO* student_vo) {
    if (NULL == student_vo) return;
    freep((void**)&student_vo->name);
    free(student_vo);
}

const char* student_vo_get_name(StudentVO* student_vo) {
    if (NULL == student_vo) return NULL;
    return student_vo->name;
}

void student_vo_set_name(StudentVO* student_vo, const char* name) {
    if (NULL == student_vo) return;
    freep((void**)&student_vo->name);
    student_vo->name = cstrdup(name);
}

int student_vo_get_roll_number(StudentVO* student_vo) {
    if (NULL == student_vo) return INT32_MIN;
    return student_vo->roll_number;
}

void student_vo_set_roll_number(StudentVO* student_vo, int roll_number) {
    if (NULL == student_vo) return;
    student_vo->roll_number = roll_number;
}
