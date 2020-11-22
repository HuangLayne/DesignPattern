//
//  PrototypePatternDemo.m
//  5.PrototypePattern
//
//  Created by Layne on 2020/10/20.
//

#import "ShapeCache.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        [ShapeCache loadCache];

        Shape* clonedShape11 = [ShapeCache getShape:@"1"];
        NSLog(@"Shape : %@ %@", [clonedShape11 type], clonedShape11);
        Shape* clonedShape12 = [ShapeCache getShape:@"1"];
        NSLog(@"Shape : %@ %@", [clonedShape12 type], clonedShape12);

        Shape* clonedShape21 = [ShapeCache getShape:@"2"];
        NSLog(@"Shape : %@ %@", [clonedShape21 type], clonedShape21);
        Shape* clonedShape22 = [ShapeCache getShape:@"2"];
        NSLog(@"Shape : %@ %@", [clonedShape22 type], clonedShape22);

        Shape* clonedShape31 = [ShapeCache getShape:@"3"];
        NSLog(@"Shape : %@ %@", [clonedShape31 type], clonedShape31);
        Shape* clonedShape32 = [ShapeCache getShape:@"3"];
        NSLog(@"Shape : %@ %@", [clonedShape32 type], clonedShape32);
    }
    return 0;
}
