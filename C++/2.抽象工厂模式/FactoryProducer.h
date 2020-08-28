/**
 * @file FactoryProducer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef FACTORYPRODUCER_H_
#define FACTORYPRODUCER_H_

#include "AbstractFactory.h"
#include "ColorFactory.h"
#include "ShapeFactory.h"

class FactoryProducer {
   public:
    FactoryProducer() = default;
    ~FactoryProducer() = default;
    static std::shared_ptr<AbstractFactory> GetFactory(std::string choice);
};

std::shared_ptr<AbstractFactory> FactoryProducer::GetFactory(std::string choice) {
    if (choice.size() <= 0) return nullptr;

    if (0 == choice.compare("COLOR")) {
        return std::make_shared<ColorFactory>();
    } else if (0 == choice.compare("SHAPE")) {
        return std::make_shared<ShapeFactory>();
    }

    return nullptr;
}

#endif
