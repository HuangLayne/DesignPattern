/**
 * @file ShapeMaker.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-09
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_MAKER_H_
#define SHAPE_MAKER_H_

#include <memory>

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeMaker {
   public:
    ShapeMaker() {
        circle_ = std::make_shared<Circle>();
        rectangle_ = std::make_shared<Rectangle>();
        square_ = std::make_shared<Square>();
    }
    ~ShapeMaker() = default;
    void DrawCircle() { circle_->Draw(); }
    void DrawRectangle() { rectangle_->Draw(); }
    void DrawSquare() { square_->Draw(); }

   private:
    std::shared_ptr<Circle> circle_;
    std::shared_ptr<Rectangle> rectangle_;
    std::shared_ptr<Square> square_;
};

#endif  // SHAPE_MAKER_H_
