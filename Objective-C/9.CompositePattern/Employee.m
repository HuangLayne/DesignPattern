//
//  Employee.m
//  9.CompositePattern
//
//  Created by Layne on 2020/10/27.
//

#import "Employee.h"

@implementation Employee {
    NSString *_name;
    NSString *_dept;
    int _salary;
    NSMutableArray<Employee *> *_subordinates;
}

- (instancetype)initWithName:(NSString *)name Dept:(NSString *)dept Salary:(int)sal {
    self = [super init];
    if (self) {
        _name = name;
        _dept = dept;
        _salary = sal;
        _subordinates = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)add:(Employee *)employee {
    [_subordinates addObject:employee];
}

- (void)remoe:(Employee *)employee {
    [_subordinates removeObject:employee];
}

- (NSMutableArray<Employee *> *)getSubordinates {
    return _subordinates;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"Employee :[ Name : %@, dept : %@, salary :%d ]", _name, _dept, _salary];
}

@end
