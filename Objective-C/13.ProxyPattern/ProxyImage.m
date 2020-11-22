//
//  ProxyImage.m
//  13.ProxyPattern
//
//  Created by Layne on 2020/11/3.
//

#import "ProxyImage.h"
#import "RealImage.h"

@implementation ProxyImage {
    NSString* _fileName;
    RealImage* _realImage;
}

- (instancetype)initWithFileName:(NSString*)fileName {
    self = [super init];
    if (self) {
        _fileName = fileName;
    }
    return self;
}

- (void)display {
    if (_realImage == nil) {
        _realImage = [[RealImage alloc] initWithFileName:_fileName];
    }
    [_realImage display];
}

@end
