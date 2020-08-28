/**
 * @file StudentController.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef STUDENT_CONTROLLER_H_
#define STUDENT_CONTROLLER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Student.h"
#include "StudentView.h"

typedef struct StudentController StudentController;

StudentController* student_controller_create(Student* model, StudentView* view);

void student_controller_destroy(StudentController** controller);

void student_controller_set_student_name(StudentController* controller, const char* name);

const char* student_controller_get_student_name(StudentController* controller);

void student_controller_set_student_roll_number(StudentController* controller, const char* roll_number);

const char* student_controller_get_student_roll_number(StudentController* controller);

void student_controller_update_view(StudentController* controller);

#ifdef __cplusplus
}
#endif
#endif  // STUDENT_CONTROLLER_H_
