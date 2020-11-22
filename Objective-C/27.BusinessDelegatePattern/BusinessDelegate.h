//
//  BusinessDelegate.h
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BusinessDelegate : NSObject

- (void)setServiceType:(NSString*)serviceType;
- (void)doTask;

@end

NS_ASSUME_NONNULL_END
