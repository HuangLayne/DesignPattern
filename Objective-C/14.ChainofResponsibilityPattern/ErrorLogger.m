//
//  ErrorLogger.m
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import "ErrorLogger.h"

@implementation ErrorLogger

- (instancetype)initWithLevel:(int)level {
    self = [super init];
    if (self) {
        _level = level;
    }
    return self;
}

- (void)write:(NSString *)message {
    NSLog(@"Error Console::Logger: %@", message);
}

@end
