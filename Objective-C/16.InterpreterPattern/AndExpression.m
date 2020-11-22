//
//  AndExpression.m
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import "AndExpression.h"

@implementation AndExpression {
    id<ExpressionProtocol> _expr1;
    id<ExpressionProtocol> _expr2;
}

- (instancetype)initWithExpr1:(id<ExpressionProtocol>)expr1 Expr2:(id<ExpressionProtocol>)expr2 {
    self = [super init];
    if (self) {
        _expr1 = expr1;
        _expr2 = expr2;
    }
    return self;
}

- (BOOL)interpret:(nonnull NSString *)context {
    return ([_expr1 interpret:context] && [_expr2 interpret:context]);
}

@end
