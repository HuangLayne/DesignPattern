/**
 * @file Dispatcher.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include <memory>
#include <string>

#include "HomeView.h"
#include "StudentView.h"

class Dispatcher {
   public:
    Dispatcher() = default;
    ~Dispatcher() = default;
    void Dispatch(std::string request) {
        if (0 == request.compare("STUDENT")) {
            student_view->Show();
        } else {
            home_view->Show();
        }
    }

   private:
    std::shared_ptr<StudentView> student_view = std::make_shared<StudentView>();
    std::shared_ptr<HomeView> home_view = std::make_shared<HomeView>();
};

#endif  // DISPATCHER_H_
