//
//  ServiceLocator.m
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "ServiceLocator.h"
#import "Cache.h"
#import "InitialContext.h"

@implementation ServiceLocator

+ (id<ServiceProtocol>)getService:(NSString*)jndiName {
    static Cache* cache = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      cache = [[Cache alloc] init];
    });

    id<ServiceProtocol> service = [cache getService:jndiName];
    if (service != nil) {
        return service;
    }

    InitialContext* context = [[InitialContext alloc] init];
    id<ServiceProtocol> service1 = [context lookup:jndiName];
    [cache addService:service1];
    return service1;
}

@end
