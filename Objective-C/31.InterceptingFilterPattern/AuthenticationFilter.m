//
//  AuthenticationFilter.m
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "AuthenticationFilter.h"

@implementation AuthenticationFilter

- (void)execute:(nonnull NSString *)request {
    NSLog(@"Authenticating request: %@", request);
}

@end
