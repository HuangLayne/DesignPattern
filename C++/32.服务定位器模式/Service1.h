/**
 * @file Service1.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SERVICE1_H_
#define SERVICE1_H_

#include <iostream>

#include "Service.h"
class Service1 : public Service {
   public:
    Service1(/* args */) = default;
    ~Service1() = default;
    std::string GetName() override { return "Service1"; }
    void Execute() override { std::cout << "Executing Service1" << std::endl; }
};

#endif  // SERVICE1_H_
