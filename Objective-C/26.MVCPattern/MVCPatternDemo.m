//
//  MVCPatternDemo.m
//  26.MVCPattern
//
//  Created by Layne on 2020/11/21.
//

#import "StudentController.h"

static Student* retrieveStudentFromDatabase() {
    Student* student = [[Student alloc] init];
    student.name = @"Robert";
    student.rollNo = @"10";
    return student;
}

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        //从数据库获取学生记录
        Student* model = retrieveStudentFromDatabase();

        //创建一个视图：把学生详细信息输出到控制台
        StudentView* view = [[StudentView alloc] init];

        StudentController* controller = [[StudentController alloc] initWithModel:model View:view];
        [controller updateView];

        //更新模型数据
        [controller setStudentName:@"John"];
        [controller updateView];
    }
    return 0;
}
