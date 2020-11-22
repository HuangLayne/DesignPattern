//
//  NullObjectPatternDemo.m
//  22.NullObjectPattern
//
//  Created by Layne on 2020/11/19.
//

#import "CustomerFactory.h"

int main(int argc, const char *argv[]) {
    @autoreleasepool {
        AbstractCustomer *customer1 = [CustomerFactory getCustomer:@"Rob"];
        AbstractCustomer *customer2 = [CustomerFactory getCustomer:@"Bob"];
        AbstractCustomer *customer3 = [CustomerFactory getCustomer:@"Julie"];
        AbstractCustomer *customer4 = [CustomerFactory getCustomer:@"Laura"];

        NSLog(@"Customers");
        NSLog([customer1 getName]);
        NSLog([customer2 getName]);
        NSLog([customer3 getName]);
        NSLog([customer4 getName]);
    }
    return 0;
}
