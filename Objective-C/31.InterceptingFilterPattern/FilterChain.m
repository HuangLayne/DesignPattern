//
//  FilterChain.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "FilterChain.h"

@implementation FilterChain {
    NSMutableArray* _filters;
    Target* _target;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _filters = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)addFilter:(Filter*)filter {
    [_filters addObject:filter];
}

- (void)excute:(NSString*)request {
    for (Filter* filter in _filters) {
        [filter execute:request];
    }
    if (_target != nil) {
        [_target execute:request];
    }
}

- (void)setTarget:(Target*)target {
    _target = target;
}

@end
