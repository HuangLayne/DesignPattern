/**
 * @file StudentView.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentView.h"

#include <stdio.h>

#include "ctools.h"

struct StudentView {
    /* data */
};

StudentView* student_view_create(void) {
    StudentView* student_view = (StudentView*)calloc(1, sizeof(StudentView));
    return student_view;
}

void student_view_destroy(StudentView** student_view) {
    if (NULL == student_view || NULL == *student_view) return;
    freep((void**)student_view);
}

void student_view_print_student_details(StudentView* student_view, const char* student_name,
                                        const char* student_roll_number) {
    (void)student_view;
    printf("Student: \n");
    printf("Name: %s\n", student_name);
    printf("Roll No: %s\n", student_roll_number);
}
