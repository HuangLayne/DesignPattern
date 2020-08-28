/**
 * @file Iterator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_
#include <memory>

template <class Item>
class Iterator {
   public:
    Iterator() = default;
    virtual ~Iterator() = default;
    virtual bool HasNext() = 0;
    virtual Item Next() = 0;
};

#endif  // ITERATOR_H_
