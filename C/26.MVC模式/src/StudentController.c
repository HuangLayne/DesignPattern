/**
 * @file StudentController.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "StudentController.h"

#include "ctools.h"

struct StudentController {
    Student* model;
    StudentView* view;
};

StudentController* student_controller_create(Student* model, StudentView* view) {
    StudentController* controller = (StudentController*)calloc(1, sizeof(StudentController));
    if (NULL == controller) return NULL;

    controller->model = model;
    controller->view = view;
    return controller;
}

void student_controller_destroy(StudentController** controller) {
    if (NULL == controller || NULL == *controller) return;
    freep((void**)controller);
}

void student_controller_set_student_name(StudentController* controller, const char* name) {
    if (NULL == controller) return;
    student_set_name(controller->model, name);
}

const char* student_controller_get_student_name(StudentController* controller) {
    if (NULL == controller) return NULL;
    return student_get_name(controller->model);
}

void student_controller_set_student_roll_number(StudentController* controller, const char* roll_number) {
    if (NULL == controller) return;
    student_set_roll_number(controller->model, roll_number);
}

const char* student_controller_get_student_roll_number(StudentController* controller) {
    if (NULL == controller) return NULL;
    return student_get_roll_number(controller->model);
}

void student_controller_update_view(StudentController* controller) {
    if (NULL == controller) return;
    student_view_print_student_details(controller->view, student_get_name(controller->model),
                                       student_get_roll_number(controller->model));
}
