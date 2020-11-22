//
//  ServiceProtocol.h
//  32.ServiceLocatorPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ServiceProtocol <NSObject>

- (NSString*)getName;
- (void)execute;

@end

NS_ASSUME_NONNULL_END
