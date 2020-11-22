//
//  FrontController.m
//  30.FrontControllerPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "FrontController.h"
#import "Dispatcher.h"

@implementation FrontController {
    Dispatcher* _dispatcher;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _dispatcher = [[Dispatcher alloc] init];
    }
    return self;
}

- (void)dispatchRequest:(NSString*)request {
    //记录每一个请求
    [self trackRequest:request];

    //对用户进行身份验证
    if ([self isAuthenticUser]) {
        [_dispatcher dispatch:request];
    }
}

- (void)trackRequest:(NSString*)request {
    NSLog(@"Page requested: %@", request);
}

- (BOOL)isAuthenticUser {
    NSLog(@"User is authenticated successfully.");
    return YES;
}

@end
