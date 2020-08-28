/**
 * @file StudentBO.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_BO_H_
#define STUDENT_BO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "StudentVO.h"
#include "list.h"

typedef struct StudentBO StudentBO;

StudentBO* student_bo_create(void);

void student_bo_destroy(StudentBO** student_bo);

void student_bo_delete_student(StudentBO* student_bo, StudentVO* student_vo);

List* student_bo_get_all_students(StudentBO* student_bo);

StudentVO* student_bo_get_student(StudentBO* student_bo, int roll_number);

void student_bo_update_student(StudentBO* student_bo, StudentVO* student_vo);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_BO_H_
