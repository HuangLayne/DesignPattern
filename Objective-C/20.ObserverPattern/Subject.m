//
//  Subject.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "Subject.h"
#import "Observer.h"

@implementation Subject {
    int _state;
    NSMutableArray* _observers;
}

- (int)getState {
    return _state;
}
- (void)setState:(int)state {
    _state = state;
    [self notifyAllObservers];
}

- (void)attach:(Observer*)observer {
    if (_observers == nil) {
        _observers = [[NSMutableArray alloc] init];
    }
    [_observers addObject:observer];
}

- (void)notifyAllObservers {
    for (Observer* obsever in _observers) {
        [obsever update];
    }
}

@end
