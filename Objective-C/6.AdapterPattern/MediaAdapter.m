//
//  MediaAdapter.m
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import "MediaAdapter.h"
#import "Mp4Player.h"
#import "VlcPlayer.h"

@implementation MediaAdapter {
    id<AdvancedMediaPlayerProtocol> _advancedMusicPlayer;
}

- (instancetype)initWithType:(NSString *)audioType {
    if (self = [super init]) {
        if ([audioType isEqualToString:@"vlc"]) {
            _advancedMusicPlayer = [[VlcPlayer alloc] init];
        } else if ([audioType isEqualToString:@"mp4"]) {
            _advancedMusicPlayer = [[Mp4Player alloc] init];
        }
    }
    return self;
}

- (void)play:(nonnull NSString *)audioType with:(nonnull NSString *)fileName {
    if ([audioType isEqualToString:@"vlc"]) {
        [_advancedMusicPlayer playVlc:fileName];
    } else if ([audioType isEqualToString:@"mp4"]) {
        [_advancedMusicPlayer playMp4:fileName];
    }
}

@end
