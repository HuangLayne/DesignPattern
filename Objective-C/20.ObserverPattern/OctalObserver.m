//
//  OctalObserver.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "OctalObserver.h"
#import "Subject.h"

@implementation OctalObserver {
    Subject* _subject;
}

- (instancetype)initWithSubject:(Subject*)subject {
    self = [super init];
    if (self) {
        _subject = subject;
        [_subject attach:self];
    }
    return self;
}

- (void)update {
    NSLog(@"Binary String: %o", [_subject getState]);
}

@end
