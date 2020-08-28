/**
 * @file Packing.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef PACKING_H_
#define PACKING_H_

#include <string>

class Packing {
   public:
    Packing() = default;
    virtual ~Packing() = default;
    virtual std::string Pack() = 0;
};

#endif  // PACKING_H_
