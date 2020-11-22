//
//  AndExpression.h
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import "ExpressionProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface AndExpression : NSObject <ExpressionProtocol>

- (instancetype)initWithExpr1:(id<ExpressionProtocol>)expr1 Expr2:(id<ExpressionProtocol>)expr2;

@end

NS_ASSUME_NONNULL_END
