/**
 * @file Filter.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FILTER_H_
#define FILTER_H_

#include <string>
class Filter {
   public:
    Filter() = default;
    virtual ~Filter() = default;
    virtual void Execute(std::string request) = 0;
};

#endif  // FILTER_H_
