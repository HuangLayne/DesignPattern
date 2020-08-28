/**
 * @file StudentBO.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-11
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENTBO_H_
#define STUDENTBO_H_

#include <iostream>
#include <list>
#include <memory>

#include "StudentVO.h"

class StudentBO {
   public:
    StudentBO() {
        students_ = std::make_shared<std::list<std::shared_ptr<StudentVO>>>();
        std::shared_ptr<StudentVO> student1 = std::make_shared<StudentVO>("Robert", 0);
        std::shared_ptr<StudentVO> student2 = std::make_shared<StudentVO>("John", 1);
        students_->push_back(student1);
        students_->push_back(student2);
    }
    ~StudentBO() { students_->clear(); }

    void DeleteStudent(std::shared_ptr<StudentVO> student) {
        for (auto begin = students_->begin(); begin != students_->end();) {
            if ((*begin)->GetRollNo() == student->GetRollNo()) {
                students_->remove(*begin);
                std::cout << "Student: Roll No " << student->GetRollNo() << ", deleted from database" << std::endl;
                break;
            }
            ++begin;
        }
    }

    //从数据库中检索学生名单
    std::shared_ptr<std::list<std::shared_ptr<StudentVO>>> GetAllStudents() { return students_; }

    std::shared_ptr<StudentVO> GetStudent(int rollNo) {
        for (auto student : (*students_)) {
            if (student->GetRollNo() == rollNo) {
                return student;
            }
        }
        return nullptr;
    }

    void UpdateStudent(std::shared_ptr<StudentVO> student) {
        for (auto stu : (*students_)) {
            if (student->GetRollNo() == stu->GetRollNo()) {
                stu->SetName(student->GetName());
                std::cout << "Student: Roll No " << student->GetRollNo() << ", updated in the database" << std::endl;
            }
        }
    }

   private:
    std::shared_ptr<std::list<std::shared_ptr<StudentVO>>> students_ = nullptr;
};

#endif  // STUDENTBO_H_
