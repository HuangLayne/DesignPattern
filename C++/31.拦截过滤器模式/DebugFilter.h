/**
 * @file DebugFilter.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef DEBUG_FILTER_H_
#define DEBUG_FILTER_H_

#include <iostream>

#include "Filter.h"
class DebugFilter : public Filter {
   public:
    DebugFilter() = default;
    ~DebugFilter() = default;
    void Execute(std::string request) override { std::cout << "request log: " << request << std::endl; }
};

#endif  // DEBUG_FILTER_H_
