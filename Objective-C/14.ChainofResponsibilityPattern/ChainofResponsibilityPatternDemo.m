//
//  ChainofResponsibilityPatternDemo.m
//  14.ChainofResponsibilityPattern
//
//  Created by Layne on 2020/11/4.
//

#import "ConsoleLogger.h"
#import "ErrorLogger.h"
#import "FileLogger.h"

AbstractLogger* getChainOfLoggers() {
    AbstractLogger* consoleLogger = [[ConsoleLogger alloc] initWithLevel:INFO];
    AbstractLogger* errorLogger = [[ErrorLogger alloc] initWithLevel:ERROR];
    AbstractLogger* fileLogger = [[FileLogger alloc] initWithLevel:DEBUG];
    [errorLogger setNextLogger:fileLogger];
    [fileLogger setNextLogger:consoleLogger];
    return errorLogger;
}

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        AbstractLogger* loggerChain = getChainOfLoggers();
        [loggerChain logMessage:INFO Message:@"This is an information."];
        [loggerChain logMessage:DEBUG Message:@"This is a debug level information."];
        [loggerChain logMessage:ERROR Message:@"This is an error information."];
    }
    return 0;
}
