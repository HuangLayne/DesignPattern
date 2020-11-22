//
//  AbstractLogger.m
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import "AbstractLogger.h"

#define MethodNotImplemented()                                                                              \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException                                  \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass", \
                                                                     NSStringFromSelector(_cmd)]            \
                                 userInfo:nil]

@implementation AbstractLogger

- (void)setNextLogger:(AbstractLogger*)nextLogger {
    _nextLogger = nextLogger;
}

- (void)logMessage:(int)level Message:(NSString*)message {
    if (_level <= level) {
        [self write:message];
    }
    if (_nextLogger != nil) {
        [_nextLogger logMessage:level Message:message];
    }
}

- (void)write:(NSString*)message {
    MethodNotImplemented();
}

@end
