//
//  ComputerPartVisitorProtocol.h
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Computer;
@class Mouse;
@class Keyboard;
@class Monitor;

@protocol ComputerPartVisitorProtocol <NSObject>

- (void)visitComputer:(Computer*)computer;
- (void)visitMouse:(Mouse*)mouse;
- (void)visitKeyboard:(Keyboard*)keyboard;
- (void)visitMonitor:(Monitor*)monitor;

@end

NS_ASSUME_NONNULL_END
