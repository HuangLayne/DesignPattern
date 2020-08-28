/**
 * @file StudentDao.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_DAO_H_
#define STUDENT_DAO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Student.h"
#include "list.h"

typedef struct StudentDao StudentDao;

StudentDao* student_dao_create(void);

void student_dao_destroy(StudentDao** student_dao);

List* student_dao_get_all_students(struct StudentDao* student_dao);

Student* student_dao_get_student(struct StudentDao* student_dao, int roll_number);

void student_dao_update_student(struct StudentDao* student_dao, Student* student);

void student_dao_delete_student(struct StudentDao* student_dao, Student* student);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_DAO_H_
