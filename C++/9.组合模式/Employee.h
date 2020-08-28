/**
 * @file Employee.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-07
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <list>
#include <memory>
#include <string>

class Employee {
   public:
    Employee(std::string name, std::string dept, int sal) : name_(name), dept_(dept), sal_(sal) {
        subordinates_ = std::make_shared<std::list<std::shared_ptr<Employee>>>();
    }
    ~Employee() = default;

    void Add(std::shared_ptr<Employee> e) { subordinates_->push_back(e); }

    void Remove(std::shared_ptr<Employee> e) { subordinates_->remove(e); }

    std::shared_ptr<std::list<std::shared_ptr<Employee>>> GetSubordinates() { return subordinates_; }

    std::string ToString() {
        return ("Employee :[ Name : " + name_ + ", dept : " + dept_ + ", salary :" + std::to_string(sal_) + " ]");
    }

   private:
    std::shared_ptr<std::list<std::shared_ptr<Employee>>> subordinates_;
    std::string name_;
    std::string dept_;
    int sal_;
};

#endif  // EMPLOYEE_H_
