/**
 * @file Shape.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <memory>

#include "DrawAPI.h"

class Shape {
   public:
    Shape(std::shared_ptr<DrawAPI> draw_api) { this->draw_api = draw_api; }
    virtual ~Shape() = default;
    virtual void Draw() = 0;

   protected:
    std::shared_ptr<DrawAPI> draw_api = nullptr;
};

#endif  // SHAPE_H_
