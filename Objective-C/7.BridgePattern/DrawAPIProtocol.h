//
//  DrawAPIProtocol.h
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DrawAPIProtocol <NSObject>

- (void)drawCircleWithRadiu:(int)radius X:(int)x Y:(int)y;

@end

NS_ASSUME_NONNULL_END
