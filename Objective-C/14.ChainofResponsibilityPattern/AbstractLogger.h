//
//  AbstractLogger.h
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

enum LogLevel { INFO = 1, DEBUG, ERROR };

@interface AbstractLogger : NSObject {
   @protected
    int _level;
    AbstractLogger* _nextLogger;
}

- (void)setNextLogger:(AbstractLogger*)nextLogger;
- (void)logMessage:(int)level Message:(NSString*)message;
- (void)write:(NSString*)message;

@end

NS_ASSUME_NONNULL_END
