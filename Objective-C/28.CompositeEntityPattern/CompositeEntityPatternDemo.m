//
//  CompositeEntityPatternDemo.m
//  28.CompositeEntityPattern
//
//  Created by Layne on 2020/11/21.
//

#import "Client.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Client* client = [[Client alloc] init];
        [client setData1:@"Test" Data2:@"Data"];
        [client printData];
        [client setData1:@"Second Test" Data2:@"Data1"];
        [client printData];
    }
    return 0;
}
