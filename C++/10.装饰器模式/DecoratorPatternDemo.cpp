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
    std::shared_ptr<Shape> circle = std::make_shared<Circle>();
    std::shared_ptr<ShapeDecorator> red_circle = std::make_shared<RedShapeDecorator>(std::make_shared<Circle>());
    std::shared_ptr<ShapeDecorator> red_rectangle = std::make_shared<RedShapeDecorator>(std::make_shared<Rectangle>());

    std::cout << "Circle with normal border" << std::endl;
    circle->Draw();

    std::cout << "\nCircle of red border" << std::endl;
    red_circle->Draw();

    std::cout << "\nRectangle of red border" << std::endl;
    red_rectangle->Draw();

    return 0;
}
