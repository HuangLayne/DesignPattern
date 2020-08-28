/**
 * @file FacadePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-09
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "ShapeMaker.h"

int main(int argc, char const *argv[]) {
    ShapeMaker shape_maker;
    shape_maker.DrawCircle();
    shape_maker.DrawRectangle();
    shape_maker.DrawSquare();
    return 0;
}
