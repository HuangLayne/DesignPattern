//
//  AbstractCustomer.m
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "AbstractCustomer.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation AbstractCustomer

- (BOOL)isNil {
    MethodNotImplemented();
}

- (NSString*)getName {
    MethodNotImplemented();
}

@end
