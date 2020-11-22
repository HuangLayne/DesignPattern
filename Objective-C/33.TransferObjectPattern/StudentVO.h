//
//  StudentVO.h
//  33.TransferObjectPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StudentVO : NSObject
@property(strong, nonatomic) NSString *name;
@property int rollNo;

- (instancetype)initWithName:(NSString *)name RollNo:(int)rollNo;

@end

NS_ASSUME_NONNULL_END
