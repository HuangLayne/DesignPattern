/**
 * @file AbstractFactoryPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-17
 *
 * @copyright Copyright (c) 2020
 *
 */
#include <stdio.h>

#include "Color.h"
#include "Factory.h"
#include "FactoryProducer.h"
#include "Shape.h"

int main(int argc, char const* argv[]) {
    //获取形状工厂
    struct Factory* shape_factory = factory_producer_get_factory("SHAPE");
    if (NULL == shape_factory) return 0;

    //获取形状为 Circle 的对象
    struct Shape* shape1 = factory_get_shape(shape_factory, "CIRCLE");
    //调用 Circle 的 draw 方法
    shape_draw(shape1);
    shape_destory(&shape1);

    //获取形状为 Rectangle 的对象
    struct Shape* shape2 = factory_get_shape(shape_factory, "RECTANGLE");
    //调用 Rectangle 的 draw 方法
    shape_draw(shape2);
    shape_destory(&shape2);

    //获取形状为 Square 的对象
    struct Shape* shape3 = factory_get_shape(shape_factory, "SQUARE");
    //调用 Square 的 draw 方法
    shape_draw(shape3);
    shape_destory(&shape3);

    factory_destory(&shape_factory);

    //获取颜色工厂
    struct Factory* color_factory = factory_producer_get_factory("COLOR");
    if (NULL == color_factory) return 0;

    //获取颜色为 Red 的对象
    struct Color* color1 = factory_get_color(color_factory, "RED");
    //调用 Red 的 fill 方法
    color_fill(color1);
    color_destory(&color1);

    //获取颜色为 Green 的对象
    struct Color* color2 = factory_get_color(color_factory, "GREEN");
    //调用 Green 的 fill 方法
    color_fill(color2);
    color_destory(&color2);

    //获取颜色为 Blue 的对象
    struct Color* color3 = factory_get_color(color_factory, "BLUE");
    //调用 Blue 的 fill 方法
    color_fill(color3);
    color_destory(&color3);

    factory_destory(&color_factory);

    return 0;
}
