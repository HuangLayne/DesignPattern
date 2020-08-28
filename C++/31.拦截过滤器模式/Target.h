/**
 * @file Target.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef TARGET_H_
#define TARGET_H_

#include <iostream>
class Target {
   public:
    Target() = default;
    ~Target() = default;
    void Execute(std::string request) { std::cout << "Executing request: " << request << std::endl; }
};

#endif  // TARGET_H_
