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

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeMaker {
   public:
    ShapeMaker() {
        circle_ = new Circle();
        rectangle_ = new Rectangle();
        square_ = new Square();
    }
    ~ShapeMaker() {
        if (nullptr != circle_) {
            delete circle_;
            circle_ = nullptr;
        }
        if (nullptr != rectangle_) {
            delete rectangle_;
            rectangle_ = nullptr;
        }
        if (nullptr != square_) {
            delete square_;
            square_ = nullptr;
        }
    }
    void DrawCircle() { circle_->Draw(); }
    void DrawRectangle() { rectangle_->Draw(); }
    void DrawSquare() { square_->Draw(); }

   private:
    Circle *circle_;
    Rectangle *rectangle_;
    Square *square_;
};

#endif  // SHAPE_MAKER_H_
