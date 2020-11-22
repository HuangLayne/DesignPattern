//
//  FrontControllerPatternDemo.m
//  30.FrontControllerPattern
//
//  Created by Layne on 2020/11/22.
//

#import "FrontController.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        FrontController* frontController = [[FrontController alloc] init];
        [frontController dispatchRequest:@"HOME"];
        [frontController dispatchRequest:@"STUDENT"];
    }
    return 0;
}
