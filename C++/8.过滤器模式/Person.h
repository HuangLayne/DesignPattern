/**
 * @file Person.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {
   public:
    Person(const std::string name, const std::string gender, const std::string marital_status) {
        this->name_ = name;
        this->gender_ = gender;
        this->marital_status_ = marital_status;
    }
    virtual ~Person() = default;
    std::string GetName() { return name_; }

    std::string GetGender() { return gender_; }

    std::string GetMaritalStatus() { return marital_status_; }

    friend bool operator==(const Person& a, const Person& b) {
        if (a.gender_ == b.gender_ && a.name_ == b.name_ && a.marital_status_ == b.marital_status_) {
            return true;
        } else {
            return false;
        }
    }

   private:
    std::string name_;
    std::string gender_;
    std::string marital_status_;
};

#endif  // PERSON_H_
