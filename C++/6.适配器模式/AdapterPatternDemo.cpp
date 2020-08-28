/**
 * @file AdapterPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "AudioPlayer.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<AudioPlayer> audio_player = std::make_shared<AudioPlayer>();

    audio_player->Play("mp3", "beyond the horizon.mp3");
    audio_player->Play("mp4", "alone.mp4");
    audio_player->Play("vlc", "far far away.vlc");
    audio_player->Play("avi", "mind me.avi");

    return 0;
}
