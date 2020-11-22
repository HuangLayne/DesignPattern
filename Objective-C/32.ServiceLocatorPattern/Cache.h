//
//  Cache.h
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "ServiceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Cache : NSObject

- (instancetype)init;
- (id<ServiceProtocol>)getService:(NSString*)serviceName;
- (void)addService:(id<ServiceProtocol>)newService;

@end

NS_ASSUME_NONNULL_END
