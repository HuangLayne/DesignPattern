//
//  ComputerPartDisplayVisitor.m
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "ComputerPartDisplayVisitor.h"

@implementation ComputerPartDisplayVisitor

- (void)visitComputer:(nonnull Computer *)computer {
    NSLog(@"Displaying Computer.");
}

- (void)visitKeyboard:(nonnull Keyboard *)keyboard {
    NSLog(@"Displaying Keyboard.");
}

- (void)visitMonitor:(nonnull Monitor *)monitor {
    NSLog(@"Displaying Monitor.");
}

- (void)visitMouse:(nonnull Mouse *)mouse {
    NSLog(@"Displaying Mouse.");
}

@end
