/**
 * @file FactoryPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-07
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ShapeFactory.h"

int main(int argc, char** argv) {
    std::shared_ptr<ShapeFactory> shape_factory = std::make_shared<ShapeFactory>();
    if (nullptr == shape_factory) return 0;

    std::shared_ptr<Shape> shape1 = shape_factory->GetShape("CIRCLE");
    if (nullptr != shape1) shape1->Draw();

    std::shared_ptr<Shape> shape2 = shape_factory->GetShape("RECTANGLE");
    if (nullptr != shape2) shape2->Draw();

    std::shared_ptr<Shape> shape3 = shape_factory->GetShape("SQUARE");
    if (nullptr != shape3) shape3->Draw();

    return 0;
}
