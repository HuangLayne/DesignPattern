/**
 * @file BridgePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-31
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Circle.h"
#include "GreenCircle.h"
#include "RedCircle.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<DrawAPI> red = std::make_shared<RedCircle>();
    std::shared_ptr<DrawAPI> green = std::make_shared<GreenCircle>();
    std::shared_ptr<Shape> red_circle = std::make_shared<Circle>(100, 100, 10, red);
    std::shared_ptr<Shape> green_circle = std::make_shared<Circle>(100, 100, 10, green);
    red_circle->Draw();
    green_circle->Draw();

    return 0;
}
