/**
 * @file Square.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
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
    Square() { type = "Square"; }
    ~Square() = default;
    void Draw() const override { std::cout << "Inside Square::draw() method." << std::endl; }
    std::shared_ptr<Shape> Clone() const override { return std::make_shared<Square>(*this); }
};

#endif  // SQUARE_H_
