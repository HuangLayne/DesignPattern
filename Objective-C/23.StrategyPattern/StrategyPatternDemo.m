//
//  StrategyPatternDemo.m
//  23.StrategyPattern
//
//  Created by Layne on 2020/11/22.
//

#import "Context.h"
#import "OperationAdd.h"
#import "OperationMultiply.h"
#import "OperationSubtract.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Context* context = [[Context alloc] initWithStrategy:[[OperationAdd alloc] init]];
        NSLog(@"10 + 5 = %d", [context executeStrategyWithNum1:10 Num2:5]);

        context = [[Context alloc] initWithStrategy:[[OperationSubtract alloc] init]];
        NSLog(@"10 - 5 = %d", [context executeStrategyWithNum1:10 Num2:5]);

        context = [[Context alloc] initWithStrategy:[[OperationMultiply alloc] init]];
        NSLog(@"10 * 5 = %d", [context executeStrategyWithNum1:10 Num2:5]);
    }
    return 0;
}
