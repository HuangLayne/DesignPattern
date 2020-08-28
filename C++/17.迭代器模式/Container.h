/**
 * @file Container.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CONTAINER_H_
#define CONTAINER_H_

#include "Iterator.h"

template <class Item>
class Container {
   public:
    Container() = default;
    virtual ~Container() = default;
    virtual std::shared_ptr<Iterator<Item>> GetIterator() = 0;
};

#endif  // CONTAINER_H_
