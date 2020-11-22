//
//  Burger.m
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "Burger.h"
#import "Wrapper.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Burger

- (nonnull NSString *)name {
    MethodNotImplemented();
}

- (nonnull id<PackingProtocol>)packing {
    return [[Wrapper alloc] init];
}

- (float)price {
    MethodNotImplemented();
}

@end
