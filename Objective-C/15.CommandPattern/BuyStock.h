//
//  BuyStock.h
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "OrderProtocol.h"
#import "Stock.h"

NS_ASSUME_NONNULL_BEGIN

@interface BuyStock : NSObject <OrderProtocol>

- (instancetype)initWithStock:(Stock*)abcStock;

@end

NS_ASSUME_NONNULL_END
