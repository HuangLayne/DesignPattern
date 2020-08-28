/**
 * @file ShapeCache.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_CACHE_H_
#define SHAPE_CACHE_H_

#include <map>

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

class ShapeCache {
   public:
    ShapeCache() = default;
    ~ShapeCache() = default;
    static std::shared_ptr<Shape> GetShape(int shape_id) {
        std::shared_ptr<Shape> cached_shape = shape_map[shape_id];
        return cached_shape->Clone();
    }

    // 对每种形状都运行数据库查询，并创建该形状
    // shapeMap.put(shapeKey, shape);
    // 例如，我们要添加三种形状
    static void LoadCache() {
        std::shared_ptr<Circle> circle = std::make_shared<Circle>();
        circle->SetId(1);
        shape_map[circle->GetId()] = circle;

        std::shared_ptr<Square> square = std::make_shared<Square>();
        square->SetId(2);
        shape_map[square->GetId()] = square;

        std::shared_ptr<Rectangle> rectangle = std::make_shared<Rectangle>();
        rectangle->SetId(3);
        shape_map[rectangle->GetId()] = rectangle;
    }

   private:
    static std::map<int, std::shared_ptr<Shape>> shape_map;
};

std::map<int, std::shared_ptr<Shape>> ShapeCache::shape_map;

#endif  // SHAPE_CACHE_H_
