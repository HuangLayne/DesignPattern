//
//  SellStock.m
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "SellStock.h"

@implementation SellStock {
    Stock* _abcStock;
};

- (instancetype)initWithStock:(Stock*)abcStock {
    self = [super init];
    if (self) {
        _abcStock = abcStock;
    }
    return self;
}

- (void)execute {
    [_abcStock sell];
}

@end
