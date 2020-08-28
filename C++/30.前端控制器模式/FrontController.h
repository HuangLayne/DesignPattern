/**
 * @file FrontController.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-06
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FRONT_CONTROLLER_H_
#define FRONT_CONTROLLER_H_

#include "Dispatcher.h"
class FrontController {
   public:
    FrontController(/* args */) = default;
    ~FrontController() = default;

    void DispatchRequest(std::string request) {
        //记录每一个请求
        TrackRequest(request);
        //对用户进行身份验证
        if (IsAuthenticUser()) {
            dispatcher->Dispatch(request);
        }
    }

   private:
    bool IsAuthenticUser() {
        std::cout << "User is authenticated successfully." << std::endl;
        return true;
    }

    void TrackRequest(std::string request) { std::cout << "Page requested: " << request << std::endl; }

   private:
    std::shared_ptr<Dispatcher> dispatcher = std::make_shared<Dispatcher>();
};

#endif  // FRONT_CONTROLLER_H_
