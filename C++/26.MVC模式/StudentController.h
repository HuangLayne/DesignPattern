/**
 * @file StudentController.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-02
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_CONTROLLER_H_
#define STUDENT_CONTROLLER_H_

#include <memory>

#include "Student.h"
#include "StudentView.h"
class StudentController {
   public:
    StudentController(std::shared_ptr<Student> model, std::shared_ptr<StudentView> view) {
        model_ = model;
        view_ = view;
    }
    ~StudentController() = default;
    void SetStudentName(std::string name) { model_->SetName(name); }
    std::string GetStudentName() { return model_->GetName(); }
    void SetStudentRollNo(std::string roll_no) { model_->SetRollNo(roll_no); }
    std::string GetStudentRollNo() { return model_->GetRollNo(); }
    void UpdateView() { view_->PrintStudentDetails(model_->GetName(), model_->GetRollNo()); }

   private:
    std::shared_ptr<Student> model_;
    std::shared_ptr<StudentView> view_;
};

#endif  // STUDENT_CONTROLLER_H_
