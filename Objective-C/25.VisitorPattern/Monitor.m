//
//  Monitor.m
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Monitor.h"
#import "ComputerPartVisitorProtocol.h"

@implementation Monitor

- (void)accept:(nonnull id<ComputerPartVisitorProtocol>)computerPartVisitor {
    [computerPartVisitor visitMonitor:self];
}

@end
