//
//  ServiceLocator.h
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "ServiceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ServiceLocator : NSObject

+ (id<ServiceProtocol>)getService:(NSString*)jndiName;

@end

NS_ASSUME_NONNULL_END
