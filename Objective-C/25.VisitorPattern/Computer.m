//
//  Computer.m
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Computer.h"
#import "ComputerPartVisitorProtocol.h"
#import "Keyboard.h"
#import "Monitor.h"
#import "Mouse.h"

@implementation Computer {
    NSMutableArray* _parts;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _parts = [[NSMutableArray alloc] init];
        [_parts addObject:[[Mouse alloc] init]];
        [_parts addObject:[[Keyboard alloc] init]];
        [_parts addObject:[[Monitor alloc] init]];
    }
    return self;
}

- (void)accept:(nonnull id<ComputerPartVisitorProtocol>)computerPartVisitor {
    for (id<ComputerPartProtocol> part in _parts) {
        if ([part isKindOfClass:[Mouse class]]) {
            [computerPartVisitor visitMouse:part];
        } else if ([part isKindOfClass:[Keyboard class]]) {
            [computerPartVisitor visitKeyboard:part];
        } else if ([part isKindOfClass:[Monitor class]]) {
            [computerPartVisitor visitMonitor:part];
        }
    }
    [computerPartVisitor visitComputer:self];
}

@end
