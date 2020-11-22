//
//  ServiceLocatorPatternDemo.m
//  32.ServiceLocatorPattern
//
//  Created by Layne on 2020/11/22.
//

#import "ServiceLocator.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        id<ServiceProtocol> service = [ServiceLocator getService:@"Service1"];
        [service execute];

        service = [ServiceLocator getService:@"Service2"];
        [service execute];

        service = [ServiceLocator getService:@"Service1"];
        [service execute];

        service = [ServiceLocator getService:@"Service2"];
        [service execute];
    }
    return 0;
}
