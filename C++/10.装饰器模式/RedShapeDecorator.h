/**
 * @file RedShapeDecorator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef RED_SHAPE_DECORATOR_H_
#define RED_SHAPE_DECORATOR_H_

#include <iostream>

#include "ShapeDecorator.h"

class RedShapeDecorator : public ShapeDecorator {
   public:
    RedShapeDecorator(std::shared_ptr<Shape> decorated_shape) : ShapeDecorator(decorated_shape) {}
    ~RedShapeDecorator() = default;

    void Draw() override {
        decorated_shape_->Draw();
        SetRedBorder(decorated_shape_);
    }

   private:
    void SetRedBorder(std::shared_ptr<Shape> decorated_shape) { std::cout << "Border Color: Red" << std::endl; }
};

#endif  // RED_SHAPE_DECORATOR_H_
