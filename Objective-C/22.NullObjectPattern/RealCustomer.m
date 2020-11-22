//
//  RealCustomer.m
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "RealCustomer.h"

@implementation RealCustomer {
    NSString* _name;
}

- (instancetype)initWithName:(NSString*)name {
    self = [super init];
    if (self) {
        _name = name;
    }
    return self;
}

- (BOOL)isNil {
    return NO;
}

- (NSString*)getName {
    return _name;
}

@end
