//
//  FileLogger.m
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import "FileLogger.h"

@implementation FileLogger

- (instancetype)initWithLevel:(int)level {
    self = [super init];
    if (self) {
        _level = level;
    }
    return self;
}

- (void)write:(NSString *)message {
    NSLog(@"File::Logger: %@", message);
}

@end
