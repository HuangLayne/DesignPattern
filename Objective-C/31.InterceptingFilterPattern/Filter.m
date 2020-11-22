//
//  Filter.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Filter.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation Filter

- (void)execute:(NSString*)request {
    MethodNotImplemented();
}

@end
