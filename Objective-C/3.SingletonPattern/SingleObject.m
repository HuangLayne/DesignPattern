//
//  SingleObject.m
//  3.SingletonPattern
//
//  Created by Layne on 2020/10/18.
//

#import "SingleObject.h"

@implementation SingleObject

+ (SingleObject *)getInstance {
    static SingleObject *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}

- (void)showMessage {
    NSLog(@"Hello World!");
}

@end
