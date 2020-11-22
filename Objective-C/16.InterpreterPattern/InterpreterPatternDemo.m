//
//  InterpreterPatternDemo.m
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import "AndExpression.h"
#import "OrExpression.h"
#import "TerminalExpression.h"

static id<ExpressionProtocol> getMaleExpression() {
    id<ExpressionProtocol> robert = [[TerminalExpression alloc] initWithData:@"Robert"];
    id<ExpressionProtocol> john = [[TerminalExpression alloc] initWithData:@"John"];
    return [[OrExpression alloc] initWithExpr1:robert Expr2:john];
}

static id<ExpressionProtocol> getMarriedWomanExpression() {
    id<ExpressionProtocol> julie = [[TerminalExpression alloc] initWithData:@"Julie"];
    id<ExpressionProtocol> married = [[TerminalExpression alloc] initWithData:@"Married"];
    return [[AndExpression alloc] initWithExpr1:julie Expr2:married];
}

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        id<ExpressionProtocol> isMale = getMaleExpression();
        id<ExpressionProtocol> isMarriedWoman = getMarriedWomanExpression();

        NSLog(@"John is male? %@", [isMale interpret:@"John"] ? @"true" : @"false");
        NSLog(@"Julie is a married women? %@", [isMarriedWoman interpret:@"Married Julie"] ? @"true" : @"false");
    }
    return 0;
}
