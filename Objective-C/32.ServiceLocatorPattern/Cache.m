//
//  Cache.m
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Cache.h"

@implementation Cache {
    NSMutableArray* _services;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _services = [[NSMutableArray alloc] init];
    }
    return self;
}

- (id<ServiceProtocol>)getService:(NSString*)serviceName {
    for (id<ServiceProtocol> service in _services) {
        if ([[service getName] isEqualToString:serviceName]) {
            NSLog(@"Returning cached %@ object", serviceName);
            return service;
        }
    }
    return nil;
}

- (void)addService:(id<ServiceProtocol>)newService {
    BOOL exsits = NO;
    for (id<ServiceProtocol> service in _services) {
        if ([[service getName] isEqualToString:[newService getName]]) {
            exsits = YES;
        }
    }
    if (!exsits) {
        [_services addObject:newService];
    }
}

@end
