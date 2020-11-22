//
//  ColdDrink.m
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "ColdDrink.h"
#import "Bottle.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation ColdDrink

- (nonnull NSString *)name {
    MethodNotImplemented();
}

- (nonnull id<PackingProtocol>)packing {
    return [[Bottle alloc] init];
}

- (float)price {
    MethodNotImplemented();
}

@end
