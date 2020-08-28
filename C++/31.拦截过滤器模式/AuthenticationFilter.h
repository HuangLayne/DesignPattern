/**
 * @file AuthenticationFilter.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef AUTHENTICATION_FILTER_H_
#define AUTHENTICATION_FILTER_H_

#include <iostream>

#include "Filter.h"
class AuthenticationFilter : public Filter {
   public:
    AuthenticationFilter() = default;
    ~AuthenticationFilter() = default;
    void Execute(std::string request) override { std::cout << "Authenticating request: " << request << std::endl; }
};

#endif  // AUTHENTICATION_FILTER_H_
