//
//  AdapterPatternDemo.m
//  6.AdapterPattern
//
//  Created by Layne on 2020/10/22.
//

#import "AudioPlayer.h"

int main(int argc, const char* argv[]) {
    @autoreleasepool {
        AudioPlayer* audioPlayer = [[AudioPlayer alloc] init];
        [audioPlayer play:@"mp3" with:@"beyond the horizon.mp3"];
        [audioPlayer play:@"mp4" with:@"alone.mp4"];
        [audioPlayer play:@"vlc" with:@"far far away.vlc"];
        [audioPlayer play:@"avi" with:@"mind me.avi"];
    }
    return 0;
}
