//
//  FacadePatternDemo.m
//  11.FacadePattern
//
//  Created by Layne on 2020/10/29.
//

#import "ShapeMaker.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        ShapeMaker* shapeMaker = [[ShapeMaker alloc] init];
        [shapeMaker drawCircle];
        [shapeMaker drawRectangle];
        [shapeMaker drawSquare];
    }
    return 0;
}
