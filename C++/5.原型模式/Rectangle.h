/**
 * @file Rectangle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>

#include "Shape.h"
class Rectangle : public Shape {
   public:
    Rectangle() { type = "Rectangle"; }
    ~Rectangle() = default;
    void Draw() const override { std::cout << "Inside Rectangle::draw() method." << std::endl; }
    std::shared_ptr<Shape> Clone() const override { return std::make_shared<Rectangle>(*this); }
};

#endif  // RECTANGLE_H_
