//
//  Meal.m
//  4.BuilderPatternDemo
//
//  Created by Layne on 2020/10/18.
//

#import "Meal.h"

@implementation Meal {
    NSMutableArray* _items;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _items = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)addItem:(id<ItemProtocol>)item {
    [_items addObject:item];
}

- (float)getCost {
    float cost = 0.0f;
    for (id<ItemProtocol> item in _items) {
        cost += [item price];
    }
    return cost;
}

- (void)showItems {
    for (id<ItemProtocol> item in _items) {
        NSLog(@"Item : %@, Packing : %@, Price : %f", [item name], [[item packing] pack], [item price]);
    }
}

@end
