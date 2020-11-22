//
//  ShapeFactory.m
//  12.FlyweightPattern
//
//  Created by Layne on 2020/10/30.
//

#import "ShapeFactory.h"

@implementation ShapeFactory

+ (id<ShapeProtocol>)getCircle:(NSString *)color {
    static NSMutableDictionary<NSString *, id<ShapeProtocol>> *circleMap = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      circleMap = [NSMutableDictionary dictionaryWithCapacity:1];
    });

    id<ShapeProtocol> circle = [circleMap objectForKey:color];
    if (nil == circle) {
        circle = [[Circle alloc] init];
        [circleMap setObject:circle forKey:color];
        NSLog(@"Creating circle of color : %@", color);
    }
    return circle;
}

@end
