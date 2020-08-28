/**
 * @file PrototypePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ShapeCache.h"

int main(int argc, char const* argv[]) {
    ShapeCache::LoadCache();
    std::shared_ptr<Shape> cloned_shape = ShapeCache::GetShape(1);
    if (nullptr != cloned_shape) {
        std::cout << "Shape : " << cloned_shape->GetType() << std::endl;
    }

    std::shared_ptr<Shape> cloned_shape2 = ShapeCache::GetShape(2);
    if (nullptr != cloned_shape2) {
        std::cout << "Shape : " << cloned_shape2->GetType() << std::endl;
    }

    std::shared_ptr<Shape> cloned_shape3 = ShapeCache::GetShape(3);
    if (nullptr != cloned_shape3) {
        std::cout << "Shape : " << cloned_shape3->GetType() << std::endl;
    }

    return 0;
}
