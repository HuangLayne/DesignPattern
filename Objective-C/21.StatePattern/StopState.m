//
//  StopState.m
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import "StopState.h"

@implementation StopState

- (void)doAction:(nonnull Context *)context {
    NSLog(@"Player is in stop state");
    [context setState:self];
}

- (NSString *)description {
    return @"Stop State";
}

@end
