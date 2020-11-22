//
//  Meal.h
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "ItemProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface Meal : NSObject

- (void)addItem:(id<ItemProtocol>)item;
- (float)getCost;
- (void)showItems;

@end

NS_ASSUME_NONNULL_END
