/**
 * @file StudentVO.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-11
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENTVO_H_
#define STUDENTVO_H_

#include <string>

class StudentVO {
   public:
    StudentVO(std::string name, int roll_no) {
        name_ = name;
        roll_no_ = roll_no;
    }
    ~StudentVO() = default;

    std::string GetName() { return name_; }

    void SetName(std::string name) { name_ = name; }

    int GetRollNo() { return roll_no_; }

    void SetRollNo(int roll_no) { roll_no_ = roll_no; }

   private:
    std::string name_;
    int roll_no_;
};

#endif  // STUDENTVO_H_
