//
//  StudentBO.m
//  33.TransferObjectPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "StudentBO.h"

@implementation StudentBO {
    NSMutableArray* _students;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _students = [[NSMutableArray alloc] init];
        StudentVO* student1 = [[StudentVO alloc] initWithName:@"Robert" RollNo:0];
        StudentVO* student2 = [[StudentVO alloc] initWithName:@"John" RollNo:1];
        [_students addObject:student1];
        [_students addObject:student2];
    }
    return self;
}

- (void)deleteStudent:(StudentVO*)student {
    [_students removeObject:student];
    NSLog(@"Student: Roll No %d, deleted from database", student.rollNo);
}

- (NSMutableArray<StudentVO*>*)getAllStudents {
    return _students;
}

- (StudentVO*)getStudent:(int)rollNo {
    return [_students objectAtIndex:rollNo];
}

- (void)updateStudent:(StudentVO*)student {
    StudentVO* stu = [_students objectAtIndex:student.rollNo];
    stu.name = student.name;
    NSLog(@"Student: Roll No %d, updated in the database", student.rollNo);
}

@end
