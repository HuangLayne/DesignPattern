//
//  Client.m
//  27.BusinessDelegatePattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Client.h"

@implementation Client {
    BusinessDelegate* _businessDelegate;
}

- (instancetype)initWithBusinessDelegate:(BusinessDelegate*)businessDelegate {
    self = [super init];
    if (self) {
        _businessDelegate = businessDelegate;
    }
    return self;
}

- (void)doTask {
    [_businessDelegate doTask];
}

@end
