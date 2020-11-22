//
//  CommandPatternDemo.m
//  15.CommandPattern
//
//  Created by Layne on 2020/11/5.
//

#import "Broker.h"
#import "BuyStock.h"
#import "SellStock.h"
#import "Stock.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Stock* abcStock = [[Stock alloc] init];

        BuyStock* buyStock = [[BuyStock alloc] initWithStock:abcStock];
        SellStock* sellSock = [[SellStock alloc] initWithStock:abcStock];

        Broker* broker = [[Broker alloc] init];
        [broker takeOrder:buyStock];
        [broker takeOrder:sellSock];

        [broker placeOrders];
    }
    return 0;
}
