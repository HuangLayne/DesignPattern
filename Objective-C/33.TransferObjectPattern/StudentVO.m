//
//  StudentVO.m
//  33.TransferObjectPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "StudentVO.h"

@implementation StudentVO

- (instancetype)initWithName:(NSString*)name RollNo:(int)rollNo {
    self = [super init];
    if (self) {
        _name = name;
        _rollNo = rollNo;
    }
    return self;
}

@end
