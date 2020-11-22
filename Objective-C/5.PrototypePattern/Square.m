//
//  Square.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/21.
//

#import "Square.h"

@implementation Square

- (instancetype)init {
    if (self = [super init]) {
        self.type = @"Square";
    }
    return self;
}

- (void)draw {
    NSLog(@"Inside Square::draw() method.");
}

- (NSString *)description {
    return [NSString stringWithFormat:@"<Square: %p>", self];
}

@end
