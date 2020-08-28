/**
 * @file ColorFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COLORFACTORY_H_
#define COLORFACTORY_H_

#include "AbstractFactory.h"
#include "Blue.h"
#include "Green.h"
#include "Red.h"

class ColorFactory : public AbstractFactory {
   public:
    ColorFactory() = default;
    ~ColorFactory() = default;
    std::shared_ptr<Shape> GetShape(std::string shape_type) override;
    std::shared_ptr<Color> GetColor(std::string color_type) override;
};

std::shared_ptr<Shape> ColorFactory::GetShape(std::string shape_type) { return nullptr; }

std::shared_ptr<Color> ColorFactory::GetColor(std::string color_type) {
    if (color_type.size() <= 0) return nullptr;

    if (0 == color_type.compare("RED")) {
        return std::make_shared<Red>();
    } else if (0 == color_type.compare("GREEN")) {
        return std::make_shared<Green>();
    } else if (0 == color_type.compare("BLUE")) {
        return std::make_shared<Blue>();
    }

    return nullptr;
}

#endif
