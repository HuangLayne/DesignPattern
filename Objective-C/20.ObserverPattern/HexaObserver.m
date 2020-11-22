//
//  HexaObserver.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "HexaObserver.h"
#import "Subject.h"

@implementation HexaObserver {
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
    NSLog(@"Hex String %X", [_subject getState]);
}

@end
