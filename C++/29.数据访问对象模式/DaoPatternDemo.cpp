/**
 * @file DaoPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "StudentDaoImpl.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<StudentDao> student_dao = std::make_shared<StudentDaoImpl>();

    //输出所有的学生
    for (std::shared_ptr<Student> student : student_dao->GetAllStudent()) {
        std::cout << "Student: [RollNo : " << student->GetRollNo() << ", Name : " << student->GetName() << " ]"
                  << std::endl;
    }
    //更新学生
    std::shared_ptr<Student> student = student_dao->GetAllStudent().front();
    student->SetName("Michael");
    student_dao->UpdateStudent(student);

    //获取学生
    student = student_dao->GetStudent(0);
    std::cout << "Student: [RollNo : " << student->GetRollNo() << ", Name : " << student->GetName() + " ]" << std::endl;

    return 0;
}
