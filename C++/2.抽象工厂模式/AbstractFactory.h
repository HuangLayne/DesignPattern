/**
 * @file AbstractFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef AbstractFactory_H_
#define AbstractFactory_H_

#include <memory>
#include <string>

#include "Color.h"
#include "Shape.h"

class AbstractFactory {
   public:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;
    virtual std::shared_ptr<Shape> GetShape(std::string shape_type) = 0;
    virtual std::shared_ptr<Color> GetColor(std::string color_type) = 0;
};

#endif
