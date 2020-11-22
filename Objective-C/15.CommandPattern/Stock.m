//
//  Stock.m
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "Stock.h"

@implementation Stock {
    NSString* _name;
    int _quantity;
};

- (instancetype)init {
    self = [super init];
    if (self) {
        _name = @"ABC";
        _quantity = 10;
    }
    return self;
}

- (void)buy {
    NSLog(@"Stock [ Name: %@, Quantity: %d ] bought", _name, _quantity);
}

- (void)sell {
    NSLog(@"Stock [ Name: %@, Quantity: %d ] sold", _name, _quantity);
}

@end
