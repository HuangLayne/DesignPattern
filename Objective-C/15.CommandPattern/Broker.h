//
//  Broker.h
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "OrderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Broker : NSObject

- (void)takeOrder:(id<OrderProtocol>)order;

- (void)placeOrders;

@end

NS_ASSUME_NONNULL_END
