//
//  FilterChain.h
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Filter.h"
#import "Target.h"

NS_ASSUME_NONNULL_BEGIN

@interface FilterChain : NSObject

- (void)addFilter:(Filter*)filter;
- (void)excute:(NSString*)request;
- (void)setTarget:(Target*)target;

@end

NS_ASSUME_NONNULL_END
