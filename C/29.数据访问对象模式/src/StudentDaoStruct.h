/**
 * @file StudentDaoStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_DAO_STRUCT_H_
#define STUDENT_DAO_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Student.h"
#include "list.h"

struct StudentDao {
    void* priv;

    List* (*get_all_students)(struct StudentDao* student_dao);
    Student* (*get_student)(struct StudentDao* student_dao, int roll_number);
    void (*update_student)(struct StudentDao* student_dao, Student* student);
    void (*delete_student)(struct StudentDao* student_dao, Student* student);
};

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_DAO_STRUCT_H_
