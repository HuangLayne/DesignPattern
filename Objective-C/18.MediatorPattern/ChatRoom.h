//
//  ChatRoom.h
//  18.MediatorPattern
//
//  Created by Layne on 2020/11/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class User;

@interface ChatRoom : NSObject

+ (void)showMessage:(User*)user Message:(NSString*)message;

@end

NS_ASSUME_NONNULL_END
