//
//  Circle.m
//  12.FlyweightPattern
//
//  Created by Layne on 2020/10/30.
//

#import "Circle.h"

@implementation Circle {
    NSString* _color;
    int _x;
    int _y;
    int _radius;
}

- (instancetype)initWithColor:(NSString*)color {
    self = [super init];
    if (self) {
        _color = color;
    }
    return self;
}

- (void)setX:(int)x {
    _x = x;
}

- (void)setY:(int)y {
    _y = y;
}

- (void)setRadius:(int)radius {
    _radius = radius;
}

- (void)draw {
    NSLog(@"Circle: Draw() [Color : %@ x : %d, y :%d, radius :%d", _color, _x, _y, _radius);
}

@end
