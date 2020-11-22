//
//  FlyweightPatternDemo.m
//  12.FlyweightPattern
//
//  Created by Layne on 2020/10/18.
//

#import "Circle.h"
#import "ShapeFactory.h"

static NSArray* colors[3] = {@"one", @"two", @"three"};

static NSString* getRandomColor() { return colors[random() % (sizeof(colors) / sizeof(NSArray*))]; }
static int getRandomX() { return (random() % 100); }
static int getRandomY() { return (random() % 100); }

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        NSLog(@"Hello World!.");
        for (int i = 0; i < 20; ++i) {
            Circle* circle = [ShapeFactory getCircle:getRandomColor()];
            [circle setX:getRandomX()];
            [circle setY:getRandomY()];
            [circle setRadius:100];
            [circle draw];
        }
    }
    return 0;
}
