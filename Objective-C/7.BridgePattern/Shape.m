//
//  Shape.m
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import "Shape.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Shape

- (instancetype)initWithDrawAPI:(id<DrawAPIProtocol>)drawAPI {
    self = [super init];
    if (self) {
        _drawAPI = drawAPI;
    }
    return self;
}

- (void)draw {
    MethodNotImplemented();
}

@end
