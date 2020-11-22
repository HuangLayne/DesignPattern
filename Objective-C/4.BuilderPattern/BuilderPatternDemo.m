//
//  4.BuilderPatternDemo.m
//  4.BuilderPattern
//
//  Created by Layne on 2020/10/18.
//

#import "MealBuilder.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        MealBuilder* mealBuilder = [[MealBuilder alloc] init];

        Meal* vegMeal = [mealBuilder prepareVegMeal];
        NSLog(@"Veg Meal");
        [vegMeal showItems];
        NSLog(@"Total Cost: %f", [vegMeal getCost]);

        Meal* nonVegMeal = [mealBuilder prepareNonVegMeal];
        NSLog(@"\n\nNon-Veg Meal");
        [nonVegMeal showItems];
        NSLog(@"Total Cost: %f", [nonVegMeal getCost]);
    }
    return 0;
}
