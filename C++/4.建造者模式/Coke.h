/**
 * @file Coke.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COKE_H_
#define COKE_H_

#include "ColdDrink.h"
class Coke : public ColdDrink {
   public:
    Coke() = default;
    ~Coke() = default;
    std::string Name() override { return "Coke"; }
    float Price() override { return 30.0f; }
};

#endif  // COKE_H_
