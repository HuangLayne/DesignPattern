//
//  StartState.m
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import "StartState.h"

@implementation StartState

- (void)doAction:(nonnull Context *)context {
    NSLog(@"Player is in start state");
    [context setState:self];
}

- (NSString *)description {
    return @"Start State";
}

@end
