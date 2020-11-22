//
//  DecoratorPatternDemo.m
//  10.DecoratorPattern
//
//  Created by Layne on 2020/10/28.
//

#import "Circle.h"
#import "Rectangle.h"
#import "RedShapeDecorator.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        NSLog(@"Hello World!.");
        id<ShapeProtocol> circle = [[Circle alloc] init];
        ShapeDecorator* redCircle = [[RedShapeDecorator alloc] initWithShape:[[Circle alloc] init]];
        ShapeDecorator* redRectangle = [[RedShapeDecorator alloc] initWithShape:[[Rectangle alloc] init]];

        NSLog(@"Circle with normal border");
        [circle draw];

        NSLog(@"\nCircle of red border");
        [redCircle draw];

        NSLog(@"\nRectangle of red border");
        [redRectangle draw];
    }
    return 0;
}
