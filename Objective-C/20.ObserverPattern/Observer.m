//
//  Observer.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "Observer.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Observer

- (void)update {
    MethodNotImplemented();
}

@end
