/**
 * @file AbstractFactoryPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "FactoryProducer.h"

int main(int argc, char** argv) {
    FactoryProducer factory_producer;
    std::shared_ptr<AbstractFactory> shape_factory = factory_producer.GetFactory("SHAPE");
    if (nullptr != shape_factory) {
        std::shared_ptr<Shape> shape1 = shape_factory->GetShape("CIRCLE");
        if (nullptr != shape1) shape1->Draw();

        std::shared_ptr<Shape> shape2 = shape_factory->GetShape("RECTANGLE");
        if (nullptr != shape2) shape2->Draw();

        std::shared_ptr<Shape> shape3 = shape_factory->GetShape("SQUARE");
        if (nullptr != shape3) shape3->Draw();
    }

    std::shared_ptr<AbstractFactory> color_factory = factory_producer.GetFactory("COLOR");
    if (nullptr != shape_factory) {
        std::shared_ptr<Color> color1 = color_factory->GetColor("RED");
        if (nullptr != color1) color1->Fill();

        std::shared_ptr<Color> color2 = color_factory->GetColor("GREEN");
        if (nullptr != color2) color2->Fill();

        std::shared_ptr<Color> color3 = color_factory->GetColor("BLUE");
        if (nullptr != color3) color3->Fill();
    }

    return 0;
}
