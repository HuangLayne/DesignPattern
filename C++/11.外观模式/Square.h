/**
 * @file Square.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>

#include "Shape.h"
class Square : public Shape {
   public:
    Square() = default;
    virtual ~Square() = default;
    void Draw() override { std::cout << "Square::draw()" << std::endl; }
};

#endif  // SQUARE_H_
