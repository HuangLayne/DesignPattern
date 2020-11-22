//
//  FilterManager.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "FilterManager.h"
#import "FilterChain.h"

@implementation FilterManager {
    FilterChain* _filterChain;
}

- (instancetype)initWithTarget:(Target*)target {
    self = [super init];
    if (self) {
        _filterChain = [[FilterChain alloc] init];
        [_filterChain setTarget:target];
    }
    return self;
}

- (void)setFilter:(Filter*)filter {
    [_filterChain addFilter:filter];
}

- (void)filterRequest:(NSString*)request {
    [_filterChain excute:request];
}

@end
