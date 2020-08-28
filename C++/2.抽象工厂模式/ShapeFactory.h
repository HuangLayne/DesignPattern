/**
 * @file ShapeFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPEFACTORY_H_
#define SHAPEFACTORY_H_

#include "AbstractFactory.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeFactory : public AbstractFactory {
   public:
    ShapeFactory() = default;
    ~ShapeFactory() = default;
    std::shared_ptr<Shape> GetShape(std::string shape) override;
    std::shared_ptr<Color> GetColor(std::string color) override;
};

std::shared_ptr<Shape> ShapeFactory::GetShape(std::string shape_type) {
    if (shape_type.size() <= 0) return nullptr;

    if (0 == shape_type.compare("CIRCLE")) {
        return std::make_shared<Circle>();
    } else if (0 == shape_type.compare("RECTANGLE")) {
        return std::make_shared<Rectangle>();
    } else if (0 == shape_type.compare("SQUARE")) {
        return std::make_shared<Square>();
    }

    return nullptr;
}

std::shared_ptr<Color> ShapeFactory::GetColor(std::string color_type) { return nullptr; }

#endif
