//
//  AbstractCustomer.h
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AbstractCustomer : NSObject

- (BOOL)isNil;
- (NSString*)getName;

@end

NS_ASSUME_NONNULL_END
