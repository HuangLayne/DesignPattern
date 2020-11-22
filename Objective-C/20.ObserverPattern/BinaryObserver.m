//
//  BinaryObserver.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "BinaryObserver.h"
#import "Subject.h"

@implementation BinaryObserver {
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

static void dec_to_bin(int num, char* buffer) {
    if (num > 0) {
        dec_to_bin(num / 2, buffer + 1);
        *buffer = (char)(num % 2 + 48);
    }
}

- (void)update {
    char bin[20] = {0};
    dec_to_bin([_subject getState], bin);
    NSLog(@"Binary String: %s", bin);
}

@end
