//
//  Circle.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/21.
//

#import "Circle.h"

@implementation Circle

- (instancetype)init {
    if (self = [super init]) {
        self.type = @"Circle";
    }
    return self;
}

- (void)draw {
    NSLog(@"Inside Circle::draw() method.");
}

- (NSString *)description {
    return [NSString stringWithFormat:@"<Circle: %p>", self];
}

@end
