//
//  ObserverPatternDemo.m
//  20.ObserverPattern
//
//  Created by Layne on 2020/11/13.
//

#import "BinaryObserver.h"
#import "HexaObserver.h"
#import "Observer.h"
#import "OctalObserver.h"
#import "Subject.h"

int main(int argc, const char *argv[]) {
    @autoreleasepool {
        Subject *subject = [[Subject alloc] init];
        HexaObserver *hexaObserver = [[HexaObserver alloc] initWithSubject:subject];
        OctalObserver *octalObserver = [[OctalObserver alloc] initWithSubject:subject];
        BinaryObserver *binaryObserver = [[BinaryObserver alloc] initWithSubject:subject];

        NSLog(@"First state change: 15");
        [subject setState:15];

        NSLog(@"Second state change: 10");
        [subject setState:10];
    }
    return 0;
}
