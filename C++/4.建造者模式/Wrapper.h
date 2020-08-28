/**
 * @file Wrapper.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef WRAPPER_H_
#define WRAPPER_H_

#include "Packing.h"
class Wrapper : public Packing {
   public:
    Wrapper() = default;
    virtual ~Wrapper() = default;
    std::string Pack() override { return "Wrapper"; }
};

#endif  // WRAPPER_H_
