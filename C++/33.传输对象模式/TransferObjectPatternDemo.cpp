/**
 * @file TransferObjectPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-11
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "StudentBO.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<StudentBO> student_business_object = std::make_shared<StudentBO>();

    std::shared_ptr<StudentVO> student = nullptr;

    //输出所有的学生
    for (std::shared_ptr<StudentVO> student : (*student_business_object->GetAllStudents())) {
        std::cout << "Student: [RollNo : " << student->GetRollNo() << ", Name : " << student->GetName() << " ]"
                  << std::endl;
    }

    //更新学生
    student = student_business_object->GetAllStudents()->front();
    student->SetName("Michael");
    student_business_object->UpdateStudent(student);

    //获取学生
    student = student_business_object->GetAllStudents()->front();
    std::cout << "Student: [RollNo : " << student->GetRollNo() << ", Name : " << student->GetName() << " ]"
              << std::endl;
    return 0;
}
