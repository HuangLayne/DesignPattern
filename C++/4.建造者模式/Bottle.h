/**
 * @file Bottle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BOTTLE_H_
#define BOTTLE_H_

#include "Packing.h"
class Bottle : public Packing {
   public:
    Bottle() = default;
    virtual ~Bottle() = default;
    std::string Pack() override { return "Bottle"; }
};

#endif  // BOTTLE_H_
