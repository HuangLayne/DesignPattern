//
//  Keyboard.m
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Keyboard.h"
#import "ComputerPartVisitorProtocol.h"

@implementation Keyboard

- (void)accept:(nonnull id<ComputerPartVisitorProtocol>)computerPartVisitor {
    [computerPartVisitor visitKeyboard:self];
}

@end
