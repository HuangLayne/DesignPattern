//
//  TerminalExpression.h
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import "ExpressionProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface TerminalExpression : NSObject <ExpressionProtocol>

- (instancetype)initWithData:(NSString*)data;

@end

NS_ASSUME_NONNULL_END
