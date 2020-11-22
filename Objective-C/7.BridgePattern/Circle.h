//
//  Circle.h
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import "Shape.h"

NS_ASSUME_NONNULL_BEGIN

@interface Circle : Shape

- (instancetype)initWithX:(int)x Y:(int)y Radius:(int)radius DrawAPI:(id<DrawAPIProtocol>)drawAPI;

@end

NS_ASSUME_NONNULL_END
