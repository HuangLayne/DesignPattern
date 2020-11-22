//
//  CareTaker.m
//  19.MementoPattern
//
//  Created by Layne on 2020/11/12.
//

#import "CareTaker.h"

@implementation CareTaker {
    NSMutableArray *_mementoList;
}

- (void)add:(Memento *)state {
    if (_mementoList == nil) {
        _mementoList = [[NSMutableArray alloc] init];
    }
    [_mementoList addObject:state];
}

- (Memento *)get:(int)index {
    if (_mementoList == nil) return nil;
    return [_mementoList objectAtIndex:index];
}

@end
