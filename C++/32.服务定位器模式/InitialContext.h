/**
 * @file InitialContext.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef INITIAL_CONTEXT_H_
#define INITIAL_CONTEXT_H_

#include <memory>

#include "Service1.h"
#include "Service2.h"
class InitialContext {
   public:
    InitialContext(/* args */) = default;
    ~InitialContext() = default;

    std::shared_ptr<Service> Lookup(std::string jndName) {
        if (0 == jndName.compare("Service1")) {
            std::cout << "Looking up and creating a new Service1 object" << std::endl;
            return (std::make_shared<Service1>());
        } else if (0 == jndName.compare("Service2")) {
            std::cout << "Looking up and creating a new Service2 object" << std::endl;
            return (std::make_shared<Service2>());
        }
        return nullptr;
    }
};

#endif  // INITIAL_CONTEXT_H_
