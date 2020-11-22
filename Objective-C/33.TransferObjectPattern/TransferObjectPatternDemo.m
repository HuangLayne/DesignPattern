//
//  TransferObjectPatternDemo.m
//  33.TransferObjectPattern
//
//  Created by Layne on 2020/11/22.
//

#import "StudentBO.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        StudentBO* studentBusinessObject = [[StudentBO alloc] init];

        //输出所有的学生
        for (StudentVO* student in [studentBusinessObject getAllStudents]) {
            NSLog(@"Student: [RollNo : %d, Name : %@ ]", student.rollNo, student.name);
        }

        //更新学生
        StudentVO* student = [[studentBusinessObject getAllStudents] objectAtIndex:0];
        student.name = @"Michael";
        [studentBusinessObject updateStudent:student];

        //获取学生
        student = [studentBusinessObject getStudent:0];
        NSLog(@"Student: [RollNo : %d, Name : %@ ]", student.rollNo, student.name);
    }
    return 0;
}
