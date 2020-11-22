//
//  Student.h
//  29.DataAccessObjectPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject
@property int rollNo;
@property(strong, nonatomic) NSString *name;

- (instancetype)initWithName:(NSString *)name RollNo:(int)rollNo;

@end

NS_ASSUME_NONNULL_END
