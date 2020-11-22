//
//  StrategyProtocol.h
//  23.StrategyPattern
//
//  Created by 黄磊 on 2020/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol StrategyProtocol <NSObject>

- (int)doOperationWithNum1:(int)num1 Num2:(int)num2;

@end

NS_ASSUME_NONNULL_END
