//
//  StudentController.h
//  26.MVCPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Student.h"
#import "StudentView.h"

NS_ASSUME_NONNULL_BEGIN

@interface StudentController : NSObject

- (instancetype)initWithModel:(Student*)model View:(StudentView*)view;
- (void)setStudentName:(NSString*)name;
- (NSString*)getStudentName;

- (void)setStudentRollNo:(NSString*)rollNo;
- (NSString*)getStudentRollNo;

- (void)updateView;

@end

NS_ASSUME_NONNULL_END
