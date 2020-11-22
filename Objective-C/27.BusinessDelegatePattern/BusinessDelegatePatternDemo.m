//
//  BusinessDelegatePatternDemo.m
//  27.BusinessDelegatePattern
//
//  Created by Layne on 2020/11/21.
//

#import "BusinessDelegate.h"
#import "Client.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        BusinessDelegate* businessDelegate = [[BusinessDelegate alloc] init];
        [businessDelegate setServiceType:@"EJB"];

        Client* client = [[Client alloc] initWithBusinessDelegate:businessDelegate];
        [client doTask];

        [businessDelegate setServiceType:@"JMS"];
        [client doTask];
    }
    return 0;
}
