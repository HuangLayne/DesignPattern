/**
 * @file StudentBO.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentBO.h"

#include <stdio.h>

#include "ctools.h"

struct StudentBO {
    List* students;
};

static bool match_func(int64_t a, int64_t b) {
    StudentVO* student_a = (StudentVO*)a;
    StudentVO* student_b = (StudentVO*)b;
    return (student_vo_get_roll_number(student_a) == student_vo_get_roll_number(student_b));
}

StudentBO* student_bo_create(void) {
    StudentBO* student_bo = (StudentBO*)calloc(1, sizeof(StudentBO));
    if (NULL == student_bo) return NULL;

    student_bo->students = list_create();
    student_bo->students->match_func = match_func;
    student_bo->students->free_func = (void (*)(int64_t))student_vo_free_func;
    list_push_back(student_bo->students, list_node_new((int64_t)student_vo_create("Robert", 0)));
    list_push_back(student_bo->students, list_node_new((int64_t)student_vo_create("John", 1)));
    return student_bo;
}

void student_bo_destroy(StudentBO** student_bo) {
    if (NULL == student_bo || NULL == *student_bo) return;
    StudentBO* self = *student_bo;
    list_destroy(self->students);
    freep((void**)student_bo);
}

void student_bo_delete_student(StudentBO* student_bo, StudentVO* student_vo) {
    if (NULL == student_bo || NULL == student_vo) return;
    ListNode* node_to_delete = list_find(student_bo->students, (int64_t)student_vo);
    if (NULL != node_to_delete) {
        printf("Student: Roll No %d, deleted from database\n", student_vo_get_roll_number(student_vo));
        list_remove(student_bo->students, node_to_delete, true);
    }
}

List* student_bo_get_all_students(StudentBO* student_bo) {
    if (NULL == student_bo) return NULL;
    return student_bo->students;
}

StudentVO* student_bo_get_student(StudentBO* student_bo, int roll_number) {
    ListNode* node = list_at(student_bo->students, roll_number);
    return (StudentVO*)node->val;
}

void student_bo_update_student(StudentBO* student_bo, StudentVO* student_vo) {
    ListNode* node = list_find(student_bo->students, (int64_t)student_vo);
    if (NULL != node) {
        printf("Student: Roll No %d, updated in the database\n", student_vo_get_roll_number(student_vo));
    }
}
