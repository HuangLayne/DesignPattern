/**
 * @file StudentDao.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentDao.h"

#include <stdio.h>

#include "StudentDaoStruct.h"
#include "ctools.h"

typedef struct {
    List* students;
} priv_t;

StudentDao* student_dao_create(void) {
    StudentDao* student_dao = (StudentDao*)calloc(1, sizeof(StudentDao));
    if (NULL == student_dao) return NULL;

    priv_t* priv = (priv_t*)calloc(1, sizeof(priv_t));
    if (NULL == priv) goto fail;

    priv->students = list_create();
    priv->students->free_func = (void (*)(int64_t))student_free_func;
    list_push_back(priv->students, list_node_new((int64_t)student_create("Robert", 0)));
    list_push_back(priv->students, list_node_new((int64_t)student_create("John", 1)));
    student_dao->priv = priv;

    return student_dao;

fail:
    student_dao_destroy(&student_dao);
    return NULL;
}

void student_dao_destroy(StudentDao** student_dao) {
    if (NULL == student_dao || NULL == *student_dao) return;
    StudentDao* self = *student_dao;
    priv_t* priv = (priv_t*)self->priv;
    if (NULL != priv && NULL != priv->students) list_destroy(priv->students);
    freep(&self->priv);
    freep((void**)student_dao);
}

List* student_dao_get_all_students(struct StudentDao* student_dao) {
    if (NULL == student_dao || NULL == student_dao->priv) return NULL;
    priv_t* priv = student_dao->priv;
    return priv->students;
}

Student* student_dao_get_student(struct StudentDao* student_dao, int roll_number) {
    if (NULL == student_dao) return NULL;
    priv_t* priv = student_dao->priv;
    ListNode* node = list_at(priv->students, roll_number);
    if (NULL != node) return (Student*)node->val;
    return NULL;
}

void student_dao_update_student(struct StudentDao* student_dao, Student* student) {
    priv_t* priv = student_dao->priv;
    ListNode* node = list_at(priv->students, student_get_roll_number(student));
    Student* student1 = (Student*)node->val;
    student_set_name(student1, student_get_name(student1));
    printf("Student: Roll No %d, updated in the database\n", student_get_roll_number(student1));
}

void student_dao_delete_student(struct StudentDao* student_dao, Student* student) {
    priv_t* priv = student_dao->priv;
    ListNode* node = list_at(priv->students, student_get_roll_number(student));
    Student* student1 = (Student*)node->val;
    printf("Student: Roll No %d, deleted from database", student_get_roll_number(student1));
    list_remove(priv->students, node, true);
}
