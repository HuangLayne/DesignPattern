//
//  Mouse.m
//  25.VisitorPattern
//
//  Created by 黄磊 on 2020/11/21.
//

#import "Mouse.h"
#import "ComputerPartVisitorProtocol.h"

@implementation Mouse

- (void)accept:(nonnull id<ComputerPartVisitorProtocol>)computerPartVisitor {
    [computerPartVisitor visitMouse:self];
}

@end
