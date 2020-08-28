/**
 * @file Service2.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SERVICE2_H_
#define SERVICE2_H_

#include <iostream>

#include "Service.h"
class Service2 : public Service {
   public:
    Service2(/* args */) = default;
    ~Service2() = default;
    std::string GetName() override { return "Service2"; }
    void Execute() override { std::cout << "Executing Service2" << std::endl; }
};

#endif  // SERVICE2_H_
