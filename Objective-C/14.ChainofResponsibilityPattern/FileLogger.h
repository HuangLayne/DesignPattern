//
//  FileLogger.h
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import "AbstractLogger.h"

NS_ASSUME_NONNULL_BEGIN

@interface FileLogger : AbstractLogger

- (instancetype)initWithLevel:(int)level;

@end

NS_ASSUME_NONNULL_END
