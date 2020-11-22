//
//  Context.m
//  23.StrategyPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "Context.h"

@implementation Context {
    id<StrategyProtocol> _strategy;
}

- (instancetype)initWithStrategy:(id<StrategyProtocol>)strategy {
    self = [super init];
    if (self) {
        _strategy = strategy;
    }
    return self;
}

- (int)executeStrategyWithNum1:(int)num1 Num2:(int)num2 {
    return [_strategy doOperationWithNum1:num1 Num2:num2];
}

@end
