//
//  DataAccessObjectPatternDemo.m
//  29.DataAccessObjectPattern
//
//  Created by Layne on 2020/11/21.
//

#import "StudentDaoImpl.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        StudentDaoImpl* studentDao = [[StudentDaoImpl alloc] init];

        //输出所有的学生
        for (Student* student in [studentDao getAllStudents]) {
            NSLog(@"Student: [RollNo : %d, Name : %@]", student.rollNo, student.name);
        }

        //更新学生
        Student* student = [[studentDao getAllStudents] objectAtIndex:0];
        student.name = @"Michael";
        [studentDao updateStudent:student];

        //获取学生
        student = [studentDao getStudent:0];
        NSLog(@"Student: [RollNo : %d, Name : %@]", student.rollNo, student.name);
    }
    return 0;
}
