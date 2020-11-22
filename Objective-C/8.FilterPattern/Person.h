//
//  Person.h
//  8.FilterPattern
//
//  Created by Layne on 2020/10/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject
@property(readonly) NSString* name;
@property(readonly) NSString* gender;
@property(readonly) NSString* maritalStatus;

- (instancetype)initWithName:(NSString*)name Gender:(NSString*)gender MaritalStatus:(NSString*)maritalStatus;

@end

NS_ASSUME_NONNULL_END
