/**
 * @file Item.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <memory>
#include <string>

#include "Packing.h"

class Item {
   public:
    Item() = default;
    virtual ~Item() = default;
    virtual std::string Name() = 0;
    virtual float Price() = 0;
    virtual std::shared_ptr<Packing> PackingItem() = 0;
};

#endif  // ITEM_H_
