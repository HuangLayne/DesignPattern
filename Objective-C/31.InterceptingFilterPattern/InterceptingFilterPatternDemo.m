//
//  InterceptingFilterPatternDemo.m
//  31.InterceptingFilterPattern
//
//  Created by Layne on 2020/11/22.
//

#import "AuthenticationFilter.h"
#import "Client.h"
#import "DebugFilter.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        FilterManager* filterManager = [[FilterManager alloc] initWithTarget:[[Target alloc] init]];
        [filterManager setFilter:[[AuthenticationFilter alloc] init]];
        [filterManager setFilter:[[DebugFilter alloc] init]];

        Client* client = [[Client alloc] init];
        [client setFilterManager:filterManager];
        [client sendRequest:@"Home"];
    }
    return 0;
}
