/**
 * @file StudentView.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentView.h"

#include <stdio.h>

#include "ctools.h"

struct StudentView {};

StudentView* student_view_create(void) {
    StudentView* student_view = (StudentView*)calloc(1, sizeof(StudentView));
    return student_view;
}

void student_view_destroy(StudentView** student_view) {
    if (NULL == student_view || NULL == *student_view) return;
    freep((void**)student_view);
}

void student_view_show(StudentView* student_view) { printf("Displaying Student Page\n"); }
