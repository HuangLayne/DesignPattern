/**
 * @file StudentView.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef STUDENT_VIEW_H_
#define STUDENT_VIEW_H_

#include <iostream>
class StudentView {
   public:
    StudentView() = default;
    ~StudentView() = default;
    void Show() { std::cout << "Displaying Student Page" << std::endl; }
};

#endif  // STUDENT_VIEW_H_
