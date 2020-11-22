//
//  CustomerFactory.m
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "CustomerFactory.h"
#import "NullCustomer.h"
#import "RealCustomer.h"

@implementation CustomerFactory

static NSArray* names[3] = {@"Rob", @"Joe", @"Julie"};

+ (AbstractCustomer*)getCustomer:(NSString*)name {
    int namesCount = sizeof(names) / sizeof(NSArray*);
    for (int i = 0; i < namesCount; ++i) {
        if ([name isEqualToString:names[i]]) {
            return [[RealCustomer alloc] initWithName:name];
        }
    }
    return [[NullCustomer alloc] init];
}

@end
