//
//  RealImage.m
//  13.ProxyPattern
//
//  Created by Layne on 2020/11/3.
//

#import "RealImage.h"

@implementation RealImage {
    NSString* _fileName;
}

- (instancetype)initWithFileName:(NSString*)fileName {
    self = [super init];
    if (self) {
        _fileName = fileName;
        [self loadFromDisk:fileName];
    }
    return self;
}

- (void)display {
    NSLog(@"Displaying %@", _fileName);
}

- (void)loadFromDisk:(NSString*)fileName {
    NSLog(@"Loading %@", fileName);
}

@end
