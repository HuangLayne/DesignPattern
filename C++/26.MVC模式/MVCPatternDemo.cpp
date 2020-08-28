/**
 * @file MVCPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-02
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "StudentController.h"

static std::shared_ptr<Student> RetrieveStudentFromDatabase() {
    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->SetName("Robert");
    student->SetRollNo("10");
    return student;
}

int main(int argc, char const *argv[]) {
    std::shared_ptr<Student> model = RetrieveStudentFromDatabase();
    std::shared_ptr<StudentView> view = std::make_shared<StudentView>();
    std::shared_ptr<StudentController> controller = std::make_shared<StudentController>(model, view);
    controller->UpdateView();
    controller->SetStudentName("John");
    controller->UpdateView();
    return 0;
}
