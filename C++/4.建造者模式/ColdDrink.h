/**
 * @file ColdDrink.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COLD_DRINK_H_
#define COLD_DRINK_H_

#include "Bottle.h"
#include "Item.h"

class ColdDrink : public Item {
   public:
    ColdDrink() = default;
    ~ColdDrink() = default;
    virtual float Price() override = 0;
    std::shared_ptr<Packing> PackingItem() override { return std::make_shared<Bottle>(); }
};

#endif  // COLD_DRINK_H_
