/**
 * @file Student.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
class Student {
   public:
    Student(std::string name, int roll_no) {
        name_ = name;
        roll_no_ = roll_no;
    }
    ~Student() = default;

    std::string GetName() { return name_; }
    void SetName(std::string name) { name_ = name; }

    int GetRollNo() { return roll_no_; }
    void SetRollNo(int roll_no) { roll_no_ = roll_no; }

   private:
    std::string name_;
    int roll_no_;
};

#endif  // STUDENT_H_
