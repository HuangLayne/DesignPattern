/**
 * @file Circle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
   public:
    Circle(const int x, const int y, const int radius, std::shared_ptr<DrawAPI> draw_api) : Shape(draw_api) {
        this->x = x;
        this->y = y;
        this->radius = radius;
    }
    ~Circle() = default;
    void Draw() override { draw_api->DrawCircle(radius, x, y); }

   private:
    int x = 0;
    int y = 0;
    int radius = 0;
};

#endif  // CIRCLE_H_
