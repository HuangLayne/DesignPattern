//
//  Employee.h
//  9.CompositePattern
//
//  Created by Layne on 2020/10/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Employee : NSObject

- (instancetype)initWithName:(NSString *)name Dept:(NSString *)dept Salary:(int)sal;
- (void)add:(Employee *)employee;
- (void)remoe:(Employee *)employee;
- (NSMutableArray<Employee *> *)getSubordinates;
- (NSString *)description;

@end

NS_ASSUME_NONNULL_END
