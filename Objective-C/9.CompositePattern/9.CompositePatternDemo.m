//
//  CompositePatternDemo.m
//  9.CompositePattern
//
//  Created by Layne on 2020/10/27.
//

#import "Employee.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        NSLog(@"Hello World!.");
        Employee* CEO = [[Employee alloc] initWithName:@"Jone" Dept:@"CEO" Salary:30000];

        Employee* headSales = [[Employee alloc] initWithName:@"Robert" Dept:@"Head Sales" Salary:20000];
        Employee* headMarketing = [[Employee alloc] initWithName:@"Michel" Dept:@"Head Marketing" Salary:20000];

        Employee* clerk1 = [[Employee alloc] initWithName:@"Laura" Dept:@"Marketing" Salary:10000];
        Employee* clerk2 = [[Employee alloc] initWithName:@"Bob" Dept:@"Marketing" Salary:10000];

        Employee* salesExecutive1 = [[Employee alloc] initWithName:@"Richard" Dept:@"Sales" Salary:10000];
        Employee* salesExecutive2 = [[Employee alloc] initWithName:@"Rob" Dept:@"Sales" Salary:10000];

        [CEO add:headSales];
        [CEO add:headMarketing];

        [headSales add:salesExecutive1];
        [headSales add:salesExecutive2];

        [headMarketing add:clerk1];
        [headMarketing add:clerk2];

        NSLog(@"%@", CEO);
        for (Employee* headEmployee in [CEO getSubordinates]) {
            NSLog(@"%@", headEmployee);
            for (Employee* employee in [headEmployee getSubordinates]) {
                NSLog(@"%@", employee);
            }
        }
    }
    return 0;
}
