//
//  User.h
//  18.MediatorPattern
//
//  Created by Layne on 2020/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface User : NSObject
@property(strong, nonatomic) NSString* name;

- (instancetype)initWithName:(NSString*)name;
- (void)sendMessage:(NSString*)message;

@end

NS_ASSUME_NONNULL_END
