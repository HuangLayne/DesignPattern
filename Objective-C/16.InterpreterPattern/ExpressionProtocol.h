//
//  ExpressionProtocol.h
//  16.InterpreterPattern
//
//  Created by Layne on 2020/11/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ExpressionProtocol <NSObject>

- (BOOL)interpret:(NSString*)context;

@end

NS_ASSUME_NONNULL_END
