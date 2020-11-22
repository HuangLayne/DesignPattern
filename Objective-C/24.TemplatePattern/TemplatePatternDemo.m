//
//  TemplatePatternDemo.m
//  24.TemplatePattern
//
//  Created by Layne on 2020/11/20.
//

#import "Cricket.h"
#import "Football.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        Game* game = [[Cricket alloc] init];
        [game play];

        NSLog(@"\n");
        game = [[Football alloc] init];
        [game play];
    }
    return 0;
}
