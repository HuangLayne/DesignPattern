//
//  BusinessLookUp.h
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "BusinessServiceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface BusinessLookUp : NSObject

- (id<BusinessServiceProtocol>)getBusinessService:(NSString*)serviceType;

@end

NS_ASSUME_NONNULL_END
