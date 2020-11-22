//
//  Client.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Client.h"

@implementation Client {
    FilterManager* _filterManager;
}

- (void)setFilterManager:(FilterManager*)filterManager {
    _filterManager = filterManager;
}

- (void)sendRequest:(NSString*)request {
    [_filterManager filterRequest:request];
}

@end
