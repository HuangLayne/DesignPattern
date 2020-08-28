/**
 * @file RedCircle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef RED_CIRCLE_H_
#define RED_CIRCLE_H_

#include <iostream>

#include "DrawAPI.h"
class RedCircle : public DrawAPI {
   public:
    RedCircle() = default;
    ~RedCircle() = default;
    void DrawCircle(int radius, int x, int y) override {
        std::cout << "Drawing Circle[ color: red, radius: " << radius << ", x: " << x << ", " << y << "]" << std::endl;
    }
};

#endif  // RED_CIRCLE_H_
