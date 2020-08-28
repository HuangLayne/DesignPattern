/**
 * @file Rectangle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
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
    Rectangle() = default;
    ~Rectangle() = default;
    void Draw() override;
};

void Rectangle::Draw() { std::cout << "Inside Rectangle::draw() method." << std::endl; }

#endif  // RECTANGLE_H_
