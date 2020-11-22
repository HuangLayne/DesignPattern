//
//  FactoryPatternDemo.m
//  1.FactoryPattern
//
//  Created by Layne on 2020/10/17.
//

#import "ShapeFactory.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        //获取 Circle 的对象，并调用它的 draw 方法
        id<ShapeProtocol> shape1 = [ShapeFactory getShape:@"CIRCLE"];

        //调用 Circle 的 draw 方法
        [shape1 draw];

        //获取 Rectangle 的对象，并调用它的 draw 方法
        id<ShapeProtocol> shape2 = [ShapeFactory getShape:@"RECTANGLE"];

        //调用 Rectangle 的 draw 方法
        [shape2 draw];

        //获取 Square 的对象，并调用它的 draw 方法
        id<ShapeProtocol> shape3 = [ShapeFactory getShape:@"SQUARE"];

        //调用 Square 的 draw 方法
        [shape3 draw];
    }
    return 0;
}
