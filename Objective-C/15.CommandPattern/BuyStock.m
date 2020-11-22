//
//  BuyStock.m
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "BuyStock.h"

@implementation BuyStock {
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
    [_abcStock buy];
}

@end
