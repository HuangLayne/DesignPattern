//
//  Context.m
//  21.StatePattern
//
//  Created by Layne on 2020/11/19.
//

#import "Context.h"

@implementation Context {
    id<StateProtocol> _state;
}

- (void)setState:(id<StateProtocol>)state {
    _state = state;
}

- (id<StateProtocol>)getState {
    return _state;
}

@end
