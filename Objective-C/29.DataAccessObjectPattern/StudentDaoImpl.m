//
//  StudentDaoImpl.m
//  29.DataAccessObjectPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "StudentDaoImpl.h"

@implementation StudentDaoImpl {
    NSMutableArray *_students;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _students = [[NSMutableArray alloc] init];
        [_students addObject:[[Student alloc] initWithName:@"Robert" RollNo:0]];
        [_students addObject:[[Student alloc] initWithName:@"John" RollNo:1]];
    }
    return self;
}

- (void)deleteStudent:(nonnull Student *)student {
    [_students removeObjectAtIndex:student.rollNo];
    NSLog(@"Student: Roll No %d, deleted from database", student.rollNo);
}

- (nonnull NSMutableArray<Student *> *)getAllStudents {
    return _students;
}

- (nonnull Student *)getStudent:(int)rollNo {
    return [_students objectAtIndex:rollNo];
}

- (void)updateStudent:(nonnull Student *)student {
    Student *stu = [_students objectAtIndex:student.rollNo];
    stu.name = student.name;
    NSLog(@"Student: Roll No %d, updated in the database", student.rollNo);
}

@end
