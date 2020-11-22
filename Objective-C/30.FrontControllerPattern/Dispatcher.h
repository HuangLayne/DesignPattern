//
//  Dispatcher.h
//  30.FrontControllerPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Dispatcher : NSObject

- (void)dispatch:(NSString*)request;

@end

NS_ASSUME_NONNULL_END
