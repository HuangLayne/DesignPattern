/**
 * @file DecoratorPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Circle.h"
#include "Rectangle.h"
#include "RedShapeDecorator.h"

int main(int argc, char const *argv[]) {
    Shape *circle = new Circle();
    ShapeDecorator *red_circle = new RedShapeDecorator(std::make_shared<Circle>());
    ShapeDecorator *red_rectangle = new RedShapeDecorator(std::make_shared<Rectangle>());

    std::cout << "Circle with normal border" << std::endl;
    circle->Draw();

    std::cout << "\nCircle of red border" << std::endl;
    red_circle->Draw();

    std::cout << "\nRectangle of red border" << std::endl;
    red_rectangle->Draw();

    if (nullptr != circle) {
        delete circle;
        circle = nullptr;
    }
    if (nullptr != red_circle) {
        delete red_circle;
        red_circle = nullptr;
    }
    if (nullptr != red_rectangle) {
        delete red_rectangle;
        red_rectangle = nullptr;
    }
    return 0;
}
