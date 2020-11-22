//
//  Person.m
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import "Person.h"

@implementation Person

- (instancetype)initWithName:(NSString*)name Gender:(NSString*)gender MaritalStatus:(NSString*)maritalStatus {
    self = [super init];
    if (self) {
        _name = name;
        _gender = gender;
        _maritalStatus = maritalStatus;
    }
    return self;
}

@end
