//
//  BusinessDelegate.m
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "BusinessDelegate.h"
#import "BusinessLookUp.h"
#import "BusinessServiceProtocol.h"

@implementation BusinessDelegate {
    BusinessLookUp* _lookupService;
    id<BusinessServiceProtocol> _businessService;
    NSString* _serviceType;
}

- (void)setServiceType:(NSString*)serviceType {
    _serviceType = serviceType;
}

- (void)doTask {
    if (_lookupService == nil) {
        _lookupService = [[BusinessLookUp alloc] init];
    }
    _businessService = [_lookupService getBusinessService:_serviceType];
    [_businessService doProcessing];
}

@end
