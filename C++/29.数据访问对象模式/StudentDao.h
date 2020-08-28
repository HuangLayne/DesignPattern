/**
 * @file StudentDao.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_DAO_H_
#define STUDENT_DAO_H_

#include <list>
#include <memory>

#include "Student.h"

class StudentDao {
   public:
    StudentDao() = default;
    virtual ~StudentDao() = default;
    virtual std::list<std::shared_ptr<Student>> GetAllStudent() = 0;
    virtual std::shared_ptr<Student> GetStudent(int roll_no) = 0;
    virtual void UpdateStudent(std::shared_ptr<Student> student) = 0;
    virtual void DeleteStudent(std::shared_ptr<Student> student) = 0;
};

#endif  // STUDENT_DAO_H_
