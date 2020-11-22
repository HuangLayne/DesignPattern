//
//  BusinessLookUp.m
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "BusinessLookUp.h"
#import "EJBService.h"
#import "JMSService.h"

@implementation BusinessLookUp

- (id<BusinessServiceProtocol>)getBusinessService:(NSString*)serviceType {
    if ([serviceType isEqualToString:@"EJB"]) {
        return [[EJBService alloc] init];
    } else {
        return [[JMSService alloc] init];
    }
}

@end
