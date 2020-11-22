//
//  AudioPlayer.m
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import "AudioPlayer.h"
#import "MediaAdapter.h"

@implementation AudioPlayer {
    MediaAdapter *_mediaAdapter;
}

- (void)play:(nonnull NSString *)audioType with:(nonnull NSString *)fileName {
    if ([audioType isEqualToString:@"mp3"]) {
        NSLog(@"Playing mp3 file. Name: %@", fileName);
    } else if ([audioType isEqualToString:@"vlc"] || [audioType isEqualToString:@"mp4"]) {
        _mediaAdapter = [[MediaAdapter alloc] initWithType:audioType];
        [_mediaAdapter play:audioType with:fileName];
    } else {
        NSLog(@"Invalid media. %@format not supported", audioType);
    }
}

@end
