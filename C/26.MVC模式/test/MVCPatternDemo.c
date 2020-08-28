/**
 * @file MVCPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "StudentController.h"

static Student* retrieve_student_from_database(void) {
    Student* student = student_create();
    if (NULL == student) return NULL;
    student_set_name(student, "Robert");
    student_set_roll_number(student, "10");
    return student;
}

int main(int argc, char const* argv[]) {
    //从数据库获取学生记录
    Student* model = retrieve_student_from_database();

    //创建一个视图：把学生详细信息输出到控制台
    StudentView* view = student_view_create();

    StudentController* controller = student_controller_create(model, view);
    student_controller_update_view(controller);

    //更新模型数据
    student_controller_set_student_name(controller, "John");
    student_controller_update_view(controller);

    student_destroy(&model);
    student_view_destroy(&view);
    student_controller_destroy(&controller);

    return 0;
}
