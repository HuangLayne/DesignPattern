/**
 * @file ShapeDecorator.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_DECORATOR_H_
#define SHAPE_DECORATOR_H_

#include <memory>

#include "Shape.h"
class ShapeDecorator : public Shape {
   public:
    ShapeDecorator(std::shared_ptr<Shape> decorated_shape) : decorated_shape_(decorated_shape) {}
    virtual ~ShapeDecorator() = default;
    void Draw() override { decorated_shape_->Draw(); }

   protected:
    std::shared_ptr<Shape> decorated_shape_;
};

#endif  // SHAPE_DECORATOR_H_
