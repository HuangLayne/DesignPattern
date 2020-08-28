/**
 * @file FlyweightPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <stdlib.h>

#include "ShapeFactory.h"
#define random(x) rand() % (x)

static std::string colors[] = {"Red", "Green", "Blue", "White", "Black"};
static std::string& GetRandomColor() { return colors[(int)(random(sizeof(colors) / sizeof(colors[0])))]; }
static int GetRandomX() { return (int)random(100); }
static int GetRandomY() { return (int)random(100); }

int main(int argc, char const* argv[]) {
    for (int i = 0; i < 20; ++i) {
        std::shared_ptr<Circle> circle = ShapeFactory::GetCircle(GetRandomColor());
        circle->SetX(GetRandomX());
        circle->SetY(GetRandomY());
        circle->SetRadius(100);
        circle->Draw();
    }
    return 0;
}
