//
//  Student.m
//  29.DataAccessObjectPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Student.h"

@implementation Student

- (instancetype)initWithName:(NSString*)name RollNo:(int)rollNo {
    self = [super init];
    if (self) {
        _name = name;
        _rollNo = rollNo;
    }
    return self;
}

@end
