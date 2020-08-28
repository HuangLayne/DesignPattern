/**
 * @file StudentDaoImpl.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_DAO_IMPL_H_
#define STUDENT_DAO_IMPL_H_

#include <iostream>

#include "StudentDao.h"

class StudentDaoImpl : public StudentDao {
   public:
    StudentDaoImpl() {
        std::shared_ptr<Student> student1 = std::make_shared<Student>("Robert", 0);
        std::shared_ptr<Student> student2 = std::make_shared<Student>("John", 1);
        students.push_back(student1);
        students.push_back(student2);
    }
    ~StudentDaoImpl() { students.clear(); }
    std::list<std::shared_ptr<Student>> GetAllStudent() { return students; }

    std::shared_ptr<Student> GetStudent(int roll_no) {
        std::list<std::shared_ptr<Student>>::iterator it;
        for (it = students.begin(); it != students.end(); ++it) {
            if (roll_no == (*it)->GetRollNo()) {
                return *it;
            }
        }
        return nullptr;
    }
    void UpdateStudent(std::shared_ptr<Student> student) {
        std::list<std::shared_ptr<Student>>::iterator it;
        for (it = students.begin(); it != students.end(); ++it) {
            if (student->GetRollNo() == (*it)->GetRollNo()) {
                (*it)->SetName(student->GetName());
                break;
            }
        }
        std::cout << "Student: Roll No " << student->GetRollNo() << ", updated in the database" << std::endl;
    }
    void DeleteStudent(std::shared_ptr<Student> student) {
        std::list<std::shared_ptr<Student>>::iterator it;
        for (it = students.begin(); it != students.end(); ++it) {
            if (student->GetRollNo() == (*it)->GetRollNo()) {
                students.remove(*it);
            }
        }
        std::cout << "Student: Roll No " << student->GetRollNo() << ", deleted from database" << std::endl;
    }

   private:
    std::list<std::shared_ptr<Student>> students;
};

#endif  // STUDENT_DAO_IMPL_H_
