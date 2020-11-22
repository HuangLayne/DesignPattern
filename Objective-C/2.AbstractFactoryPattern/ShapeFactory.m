//
//  ShapeFactory.m
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "ShapeFactory.h"
#import "Circle.h"
#import "Rectangle.h"
#import "Square.h"

@implementation ShapeFactory

- (id<ColorProtocol>)getColor:(NSString*)colorType {
    return nil;
}

- (id<ShapeProtocol>)getShape:(NSString*)shapeType {
    if (shapeType == nil) {
        return nil;
    }
    if ([shapeType isEqualToString:@"CIRCLE"]) {
        return [[Circle alloc] init];
    } else if ([shapeType isEqualToString:@"RECTANGLE"]) {
        return [[Rectangle alloc] init];
    } else if ([shapeType isEqualToString:@"SQUARE"]) {
        return [[Square alloc] init];
    }
    return nil;
}

@end
