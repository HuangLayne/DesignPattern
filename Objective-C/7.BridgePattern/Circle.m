//
//  Circle.m
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import "Circle.h"

@implementation Circle {
    int _x;
    int _y;
    int _radius;
}

- (instancetype)initWithX:(int)x Y:(int)y Radius:(int)radius DrawAPI:(id<DrawAPIProtocol>)drawAPI {
    self = [super initWithDrawAPI:drawAPI];
    if (self) {
        _x = x;
        _y = y;
        _radius = radius;
    }
    return self;
}

- (void)draw {
    [_drawAPI drawCircleWithRadiu:_radius X:_x Y:_y];
}

@end
