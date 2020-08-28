/**
 * @file Square.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
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
    ~Square() = default;
    void Draw() override;
};

void Square::Draw() { std::cout << "Inside Square::draw() method." << std::endl; }

#endif  // SQUARE_H_
