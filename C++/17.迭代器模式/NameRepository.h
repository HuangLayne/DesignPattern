/**
 * @file NameRepository.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef NAME_REPOSITORY_H_
#define NAME_REPOSITORY_H_

#include "Container.h"
#include "NameIterator.h"

template <class Item>
class NameRepository : public Container<Item> {
   public:
    NameRepository(/* args */) = default;
    virtual ~NameRepository() = default;
    std::shared_ptr<Iterator<Item>> GetIterator() override { return std::make_shared<NameIterator<std::string>>(); }
};

#endif  // NAME_REPOSITORY_H_
