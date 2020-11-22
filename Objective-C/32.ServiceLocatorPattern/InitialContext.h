//
//  InitialContext.h
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InitialContext : NSObject

- (instancetype)lookup:(NSString*)jndiName;

@end

NS_ASSUME_NONNULL_END
