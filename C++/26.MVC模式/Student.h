/**
 * @file Student.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-02
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student {
   public:
    Student() = default;
    ~Student() = default;
    std::string GetRollNo() { return roll_no_; }
    void SetRollNo(std::string roll_no) { roll_no_ = roll_no; }
    std::string GetName() { return name_; }
    void SetName(std::string name) { name_ = name; }

   private:
    std::string roll_no_;
    std::string name_;
};

#endif  // STUDENT_H_
