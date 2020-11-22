//
//  ColorFactory.m
//  2.AbstractFactoryPattern
//
//  Created by Layne on 2020/10/18.
//

#import "ColorFactory.h"
#import "Blue.h"
#import "Green.h"
#import "Red.h"

@implementation ColorFactory

- (id<ColorProtocol>)getColor:(NSString*)colorType {
    if (colorType == nil) {
        return nil;
    }
    if ([colorType isEqualToString:@"RED"]) {
        return [[Red alloc] init];
    } else if ([colorType isEqualToString:@"GREEN"]) {
        return [[Green alloc] init];
    } else if ([colorType isEqualToString:@"BLUE"]) {
        return [[Blue alloc] init];
    }
    return nil;
}

- (id<ShapeProtocol>)getShape:(NSString*)shapeType {
    return nil;
}

@end
