/**
 * @file AudioPlayer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef AUDIO_PLAYER_H_
#define AUDIO_PLAYER_H_

#include <memory>

#include "MediaAdapter.h"
#include "MediaPlayer.h"

class AudioPlayer : public MediaPlayer {
   public:
    AudioPlayer() = default;
    ~AudioPlayer() = default;
    void Play(std::string audio_type, std::string file_name) override {
        if (0 == audio_type.compare("mp3")) {
            std::cout << "Playing mp3 file. Name: " << file_name << std::endl;
        } else if (0 == audio_type.compare("mp4") || 0 == audio_type.compare("vlc")) {
            media_adapter = std::make_shared<MediaAdapter>(audio_type);
            media_adapter->Play(audio_type, file_name);
        } else {
            std::cout << "Invalid media. " << audio_type << " format not supported" << std::endl;
        }
    }

   private:
    std::shared_ptr<MediaAdapter> media_adapter = nullptr;
};

#endif  // AUDIO_PLAYER_H_
