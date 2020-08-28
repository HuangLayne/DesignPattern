/**
 * @file Memento.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-20
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MEMENTO_H_
#define MEMENTO_H_

#include <iostream>
class Memento {
   public:
    Memento(std::string state) : state_(state) {}
    ~Memento() = default;
    std::string GetState() { return state_; }

   private:
    std::string state_;
};

#endif  // MEMENTO_H_
