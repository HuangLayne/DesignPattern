//
//  Originator.m
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "Originator.h"

@implementation Originator {
    NSString* _state;
}

- (void)setState:(NSString*)state {
    _state = state;
}

- (NSString*)getState {
    return _state;
}

- (Memento*)saveStateToMemento {
    return [[Memento alloc] initWithState:_state];
}

- (void)getStateFromMemento:(Memento*)memento {
    _state = [memento getState];
}

@end
