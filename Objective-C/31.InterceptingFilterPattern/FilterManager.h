//
//  FilterManager.h
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Filter.h"
#import "Target.h"

NS_ASSUME_NONNULL_BEGIN

@interface FilterManager : NSObject

- (instancetype)initWithTarget:(Target*)target;
- (void)setFilter:(Filter*)filter;
- (void)filterRequest:(NSString*)request;

@end

NS_ASSUME_NONNULL_END
