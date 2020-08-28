/**
 * @file Client.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include "FilterManager.h"
class Client {
   public:
    Client() = default;
    ~Client() = default;
    void SetFilterManager(std::shared_ptr<FilterManager> filter_manager) { filter_manager_ = filter_manager; }
    void SendRequest(std::string request) { filter_manager_->FilterRequest(request); }

   private:
    std::shared_ptr<FilterManager> filter_manager_;
};

#endif  // CLIENT_H_
