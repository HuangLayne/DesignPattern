//
//  StatePatternDemo.m
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import "Context.h"
#import "StartState.h"
#import "StopState.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Context* context = [[Context alloc] init];

        StartState* startState = [[StartState alloc] init];
        [startState doAction:context];

        NSLog(@"%@", [context getState]);

        StopState* stopState = [[StopState alloc] init];
        [stopState doAction:context];

        NSLog(@"%@", [context getState]);
    }
    return 0;
}
