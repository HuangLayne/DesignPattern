/**
 * @file Circle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>

#include "Shape.h"
class Circle : public Shape {
   public:
    Circle() { type = "Circle"; }
    ~Circle() = default;
    void Draw() const override { std::cout << "Inside Circle::draw() method." << std::endl; }
    std::shared_ptr<Shape> Clone() const override { return std::make_shared<Circle>(*this); }
};

#endif  // CIRCLE_H_
