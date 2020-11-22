//
//  MealBuilder.h
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "Meal.h"

NS_ASSUME_NONNULL_BEGIN

@interface MealBuilder : NSObject

- (Meal*)prepareVegMeal;
- (Meal*)prepareNonVegMeal;

@end

NS_ASSUME_NONNULL_END
