//
//  ShapeMaker.m
//  11.FacadePattern
//
//  Created by Layne on 2020/10/29.
//

#import "ShapeMaker.h"
#import "Circle.h"
#import "Rectangle.h"
#import "Square.h"

@implementation ShapeMaker {
    Circle* _circle;
    Rectangle* _rectangle;
    Square* _square;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _circle = [[Circle alloc] init];
        _rectangle = [[Rectangle alloc] init];
        _square = [[Square alloc] init];
    }
    return self;
}

- (void)drawCircle {
    [_circle draw];
}

- (void)drawRectangle {
    [_rectangle draw];
}

- (void)drawSquare {
    [_square draw];
}

@end
