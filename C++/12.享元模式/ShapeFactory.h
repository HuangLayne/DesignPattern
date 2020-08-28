/**
 * @file ShapeFactory.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_
#include <map>
#include <memory>

#include "Circle.h"

class ShapeFactory {
   public:
    ShapeFactory() = default;
    ~ShapeFactory() = default;

    static std::shared_ptr<Circle> GetCircle(std::string color) {
        // 方法一：
        std::shared_ptr<Circle> circle = circle_map_[color];
        if (nullptr == circle) {
            circle = std::make_shared<Circle>(color);
            circle_map_[color] = circle;
            std::cout << "Creating circle of color :" << color << std::endl;
        }
        return circle;

        // 方法二：
        //     auto iter = circle_map_.find(color);
        //     std::shared_ptr<Circle> circle = nullptr;

        //     if (iter == circle_map_.end()) {
        //         circle = std::make_shared<Circle>(color);
        //         circle_map_[color] = circle;
        //         std::cout << "Creating circle of color :" << color <<
        //         std::endl;
        //     } else {
        //         circle = iter->second;
        //     }
        //     return circle;
    }

   private:
    static std::map<std::string, std::shared_ptr<Circle>> circle_map_;
};

std::map<std::string, std::shared_ptr<Circle>> ShapeFactory::circle_map_;
#endif  // SHAPE_FACTORY_H_
