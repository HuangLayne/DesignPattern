/**
 * @file Student.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Student Student;

Student* student_create(const char* name, int roll_number);

void student_destroy(Student** student);

void student_free_func(Student* student);

const char* student_get_name(Student* student);

void student_set_name(Student* student, const char* name);

int student_get_roll_number(Student* student);

void student_set_roll_number(Student* student, int roll_number);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_H_
