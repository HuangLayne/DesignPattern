//
//  MealBuilder.m
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "MealBuilder.h"
#import "ChickenBurger.h"
#import "Coke.h"
#import "Pepsi.h"
#import "VegBurger.h"

@implementation MealBuilder

- (Meal*)prepareVegMeal {
    Meal* meal = [[Meal alloc] init];
    [meal addItem:[[VegBurger alloc] init]];
    [meal addItem:[[Coke alloc] init]];
    return meal;
}

- (Meal*)prepareNonVegMeal {
    Meal* meal = [[Meal alloc] init];
    [meal addItem:[[ChickenBurger alloc] init]];
    [meal addItem:[[Pepsi alloc] init]];
    return meal;
}

@end
