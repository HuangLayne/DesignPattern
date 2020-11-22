//
//  Rectangle.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/21.
//

#import "Rectangle.h"

@implementation Rectangle

- (instancetype)init {
    if (self = [super init]) {
        self.type = @"Rectangle";
    }
    return self;
}

- (void)draw {
    NSLog(@"Inside Rectangle::draw() method.");
}

- (NSString *)description {
    return [NSString stringWithFormat:@"<Rectangle: %p>", self];
}

@end
