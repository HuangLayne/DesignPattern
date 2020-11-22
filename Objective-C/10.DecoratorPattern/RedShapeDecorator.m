//
//  RedShapeDecorator.m
//  10.DecoratorPattern
//
//  Created by Layne on 2020/10/28.
//

#import "RedShapeDecorator.h"

@implementation RedShapeDecorator

- (void)draw {
    [_decoratedShape draw];
    [self setRedBorder:_decoratedShape];
}

- (void)setRedBorder:(id<ShapeProtocol>)decoratedShape {
    NSLog(@"Border Color: Red");
}

@end
