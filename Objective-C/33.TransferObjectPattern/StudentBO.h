//
//  StudentBO.h
//  33.TransferObjectPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import "StudentVO.h"

NS_ASSUME_NONNULL_BEGIN

@interface StudentBO : NSObject

- (void)deleteStudent:(StudentVO*)student;
- (NSMutableArray<StudentVO*>*)getAllStudents;
- (StudentVO*)getStudent:(int)rollNo;
- (void)updateStudent:(StudentVO*)student;

@end

NS_ASSUME_NONNULL_END
