//
//  Target.h
//  31.InterceptingFilterPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Target : NSObject

- (void)execute:(NSString*)request;

@end

NS_ASSUME_NONNULL_END
