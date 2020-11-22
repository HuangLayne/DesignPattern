//
//  MementoPatternDemo.m
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "CareTaker.h"
#import "Originator.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Originator* originator = [[Originator alloc] init];
        CareTaker* careTaker = [[CareTaker alloc] init];

        [originator setState:@"State #1"];
        [originator setState:@"State #2"];
        [careTaker add:[originator saveStateToMemento]];
        [originator setState:@"State #3"];
        [careTaker add:[originator saveStateToMemento]];
        [originator setState:@"State #4"];

        NSLog(@"Current State: %@", [originator getState]);
        [originator getStateFromMemento:[careTaker get:0]];
        NSLog(@"First saved State: %@", [originator getState]);
        [originator getStateFromMemento:[careTaker get:1]];
        NSLog(@"Second saved State: %@", [originator getState]);
    }
    return 0;
}
