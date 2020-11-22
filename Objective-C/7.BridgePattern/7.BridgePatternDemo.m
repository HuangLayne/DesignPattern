//
//  BridgePatternDemo.m
//  7.BridgePattern
//
//  Created by Layne on 2020/10/24.
//

#import "Circle.h"
#import "GreenCircle.h"
#import "RedCircle.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        id<DrawAPIProtocol> redCircleDrawApi = [[RedCircle alloc] init];
        Shape* redCircle = [[Circle alloc] initWithX:100 Y:100 Radius:10 DrawAPI:redCircleDrawApi];

        id<DrawAPIProtocol> greenCicleDrawApi = [[GreenCircle alloc] init];
        Shape* greenCircle = [[Circle alloc] initWithX:100 Y:100 Radius:10 DrawAPI:greenCicleDrawApi];

        [redCircle draw];
        [greenCircle draw];
    }
    return 0;
}
