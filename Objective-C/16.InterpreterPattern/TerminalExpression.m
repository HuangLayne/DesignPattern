//
//  TerminalExpression.m
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import "TerminalExpression.h"

@implementation TerminalExpression {
    NSString* _data;
}

- (instancetype)initWithData:(NSString*)data {
    self = [super init];
    if (self) {
        _data = data;
    }
    return self;
}

- (BOOL)interpret:(nonnull NSString*)context {
    if ([context containsString:_data]) {
        return YES;
    }
    return NO;
}

@end
