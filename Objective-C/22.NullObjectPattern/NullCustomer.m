//
//  NullCustomer.m
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "NullCustomer.h"

@implementation NullCustomer

- (BOOL)isNil {
    return YES;
}

- (NSString*)getName {
    return @"Not Available in Customer Database";
}

@end
