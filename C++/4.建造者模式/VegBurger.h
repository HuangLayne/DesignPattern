/**
 * @file VegBurger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef VEG_BURGER_H_
#define VEG_BURGER_H_

#include "Burger.h"
class VegBurger : public Burger {
   public:
    VegBurger() = default;
    ~VegBurger() = default;
    std::string Name() override { return "Veg Burger"; }
    float Price() override { return 25.0f; }
};

#endif  // VEG_BURGER_H_
