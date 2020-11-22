//
//  Client.h
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "BusinessDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface Client : NSObject

- (instancetype)initWithBusinessDelegate:(BusinessDelegate*)businessDelegate;
- (void)doTask;

@end

NS_ASSUME_NONNULL_END
