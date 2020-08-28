/**
 * @file StudentView.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-02
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_VIEW_H_
#define STUDENT_VIEW_H_

#include <iostream>
#include <string>
class StudentView {
   public:
    StudentView() = default;
    ~StudentView() = default;
    void PrintStudentDetails(std::string student_name, std::string student_roll_no) {
        std::cout << "Student: " << std::endl;
        std::cout << "Name: " << student_name << std::endl;
        std::cout << "Roll No: " << student_roll_no << std::endl;
    }
};

#endif  // STUDENT_VIEW_H_
