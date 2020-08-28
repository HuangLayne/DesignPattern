/**
 * @file ShapeFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-07
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_

#include <memory>

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeFactory {
   public:
    ShapeFactory() = default;
    ~ShapeFactory() = default;
    static std::shared_ptr<Shape> GetShape(std::string shape_type);
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

#endif  // SHAPE_FACTORY_H_
