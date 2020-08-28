/**
 * @file Circle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-08
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
    Circle() = default;
    virtual ~Circle() = default;
    void Draw() override { std::cout << "Shape: Circle" << std::endl; }
};

#endif  // CIRCLE_H_
