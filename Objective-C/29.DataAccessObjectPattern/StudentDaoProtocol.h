//
//  StudentDaoProtocol.h
//  29.DataAccessObjectPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Student.h"

NS_ASSUME_NONNULL_BEGIN

@protocol StudentDaoProtocol <NSObject>

- (NSMutableArray<Student *> *)getAllStudents;
- (Student *)getStudent:(int)rollNo;
- (void)updateStudent:(Student *)student;
- (void)deleteStudent:(Student *)student;

@end

NS_ASSUME_NONNULL_END
