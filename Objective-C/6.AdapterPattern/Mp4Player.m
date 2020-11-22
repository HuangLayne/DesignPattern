//
//  Mp4Player.m
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import "Mp4Player.h"

@implementation Mp4Player

- (void)playMp4:(nonnull NSString *)fileName {
    NSLog(@"Playing mp4 file. Name: %@", fileName);
}

- (void)playVlc:(nonnull NSString *)fileName {
}

@end
