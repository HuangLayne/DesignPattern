//
//  StudentView.m
//  26.MVCPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "StudentView.h"

@implementation StudentView

- (void)printStudentDetailsName:(NSString*)studentName RollNo:(NSString*)studentRollNo {
    NSLog(@"Student: ");
    NSLog(@"Name: %@", studentName);
    NSLog(@"Roll No: %@", studentRollNo);
}

@end
