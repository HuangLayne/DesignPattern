//
//  StudentController.m
//  26.MVCPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "StudentController.h"

@implementation StudentController {
    Student* _model;
    StudentView* _view;
}

- (instancetype)initWithModel:(Student*)model View:(StudentView*)view {
    self = [super init];
    if (self) {
        _model = model;
        _view = view;
    }
    return self;
}

- (void)setStudentName:(NSString*)name {
    [_model setName:name];
}

- (NSString*)getStudentName {
    return _model.name;
}

- (void)setStudentRollNo:(NSString*)rollNo {
    [_model setRollNo:rollNo];
}

- (NSString*)getStudentRollNo {
    return _model.rollNo;
}

- (void)updateView {
    [_view printStudentDetailsName:_model.name RollNo:_model.rollNo];
}

@end
