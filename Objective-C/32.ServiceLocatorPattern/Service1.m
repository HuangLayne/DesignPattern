//
//  Service1.m
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Service1.h"

@implementation Service1

- (void)execute {
    NSLog(@"Executing Service1");
}

- (nonnull NSString *)getName {
    return @"Service1";
}

@end
