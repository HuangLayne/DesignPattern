//
//  ShapeDecorator.m
//  10.DecoratorPattern
//
//  Created by Layne on 2020/10/28.
//

#import "ShapeDecorator.h"

@implementation ShapeDecorator

- (instancetype)initWithShape:(id<ShapeProtocol>)decoratedShape {
    self = [super init];
    if (self) {
        _decoratedShape = decoratedShape;
    }
    return self;
}

- (void)draw {
    [_decoratedShape draw];
}

@end
