//
//  AbstractFactoryPatternDemo.m
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/17.
//

#import "FactoryProducer.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        //获取形状工厂
        AbstractFactory* shapeFactory = [FactoryProducer getFactory:@"SHAPE"];

        //获取形状为 Circle 的对象
        id<ShapeProtocol> shape1 = [shapeFactory getShape:@"CIRCLE"];
        //调用 Circle 的 draw 方法
        [shape1 draw];

        //获取形状为 Rectangle 的对象
        id<ShapeProtocol> shape2 = [shapeFactory getShape:@"RECTANGLE"];
        //调用 Rectangle 的 draw 方法
        [shape2 draw];

        //获取形状为 Square 的对象
        id<ShapeProtocol> shape3 = [shapeFactory getShape:@"SQUARE"];
        //调用 Square 的 draw 方法
        [shape3 draw];

        //获取颜色工厂
        AbstractFactory* colorFactory = [FactoryProducer getFactory:@"COLOR"];

        //获取颜色为 Red 的对象
        id<ColorProtocol> color1 = [colorFactory getColor:@"RED"];
        //调用 Red 的 fill 方法
        [color1 fill];

        //获取颜色为 Green 的对象
        id<ColorProtocol> color2 = [colorFactory getColor:@"GREEN"];
        //调用 Green 的 fill 方法
        [color2 fill];

        //获取颜色为 Blue 的对象
        id<ColorProtocol> color3 = [colorFactory getColor:@"BLUE"];
        //调用 Blue 的 fill 方法
        [color3 fill];
    }
    return 0;
}
