/**
 * @file GreenCircle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef GREEN_CIRCLE_H_
#define GREEN_CIRCLE_H_

#include <iostream>

#include "DrawAPI.h"
class GreenCircle : public DrawAPI {
   public:
    GreenCircle() = default;
    ~GreenCircle() = default;
    void DrawCircle(int radius, int x, int y) override {
        std::cout << "Drawing Circle[ color: green, radius: " << radius << ", x: " << x << ", " << y << "]"
                  << std::endl;
    }
};

#endif  // GREEN_CIRCLE_H_
