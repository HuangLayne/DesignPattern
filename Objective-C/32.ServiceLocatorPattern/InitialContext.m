//
//  InitialContext.m
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "InitialContext.h"
#import "Service1.h"
#import "Service2.h"

@implementation InitialContext

- (instancetype)lookup:(NSString*)jndiName {
    if ([jndiName isEqualToString:@"Service1"]) {
        NSLog(@"Looking up and creating a new Service1 object");
        return [[Service1 alloc] init];
    } else if ([jndiName isEqualToString:@"Service2"]) {
        NSLog(@"Looking up and creating a new Service2 object");
        return [[Service2 alloc] init];
    }
    return nil;
}

@end
