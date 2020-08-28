/**
 * @file ChickenBurger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CHICKEN_BURGER_H_
#define CHICKEN_BURGER_H_

#include "Burger.h"
class ChickenBurger : public Burger {
   public:
    ChickenBurger() = default;
    ~ChickenBurger() = default;
    std::string Name() override { return "Chicken Burger"; }
    float Price() override { return 50.5f; }
};

#endif  // CHICKEN_BURGER_H_
