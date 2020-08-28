/**
 * @file NameIterator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef NAME_ITERATOR_H_
#define NAME_ITERATOR_H_

#include "Iterator.h"

template <class Item>
class NameIterator : public Iterator<Item> {
   public:
    NameIterator() = default;
    virtual ~NameIterator() = default;

    bool HasNext() override {
        size_t names_number = sizeof(names_) / sizeof(names_[0]);
        return index_ < names_number;
    }

    Item Next() override {
        if (this->HasNext()) {
            return names_[index_++];
        }
        return nullptr;
    }

    static std::string names_[4];

   private:
    int index_;
};

template <class Item>
std::string NameIterator<Item>::names_[4] = {"Robert", "John", "Julie", "Lora"};

#endif  // NAME_ITERATOR_H_
