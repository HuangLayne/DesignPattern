//
//  Memento.m
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "Memento.h"

@implementation Memento {
    NSString* _state;
}

- (instancetype)initWithState:(NSString*)state {
    self = [super init];
    if (self) {
        _state = state;
    }
    return self;
}

- (NSString*)getState {
    return _state;
}

@end
