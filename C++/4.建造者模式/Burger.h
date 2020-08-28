/**
 * @file Burger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef BURGER_H_
#define BURGER_H_

#include "Item.h"
#include "Wrapper.h"
class Burger : public Item {
   public:
    Burger() = default;
    virtual ~Burger() = default;
    virtual float Price() override = 0;
    std::shared_ptr<Packing> PackingItem() override { return std::make_shared<Wrapper>(); }
};

#endif  // BURGER_H_
