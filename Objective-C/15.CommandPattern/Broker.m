//
//  Broker.m
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "Broker.h"

@implementation Broker {
    NSMutableArray* _orderList;
}

- (void)takeOrder:(id<OrderProtocol>)order {
    if (_orderList == nil) {
        _orderList = [[NSMutableArray alloc] init];
    }
    [_orderList addObject:order];
}

- (void)placeOrders {
    for (id<OrderProtocol> order in _orderList) {
        [order execute];
    }
}

@end
