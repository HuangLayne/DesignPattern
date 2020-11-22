//
//  Client.h
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "FilterManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface Client : NSObject

- (void)setFilterManager:(FilterManager*)filterManager;
- (void)sendRequest:(NSString*)request;

@end

NS_ASSUME_NONNULL_END
