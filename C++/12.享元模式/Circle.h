/**
 * @file Circle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
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
    Circle(const std::string color) : color_(color) {}
    virtual ~Circle() = default;

    void SetX(const int x) { x_ = x; }

    void SetY(const int y) { y_ = y; }

    void SetRadius(const int radius) { radius_ = radius; }
    void Draw() override {
        std::cout << "Circle: Draw() [Color : " << color_ << ", x : " << x_ << ", y :" << y_ << ", radius :" << radius_
                  << std::endl;
    }

   private:
    int x_ = 0;
    int y_ = 0;
    int radius_ = 0;
    std::string color_ = nullptr;
};

#endif  // CIRCLE_H_
