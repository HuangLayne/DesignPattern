/**
 * @file MediaAdapter.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MEDIA_ADAPTER_H_
#define MEDIA_ADAPTER_H_

#include <memory>

#include "MediaPlayer.h"
#include "Mp4Player.h"
#include "VlcPlayer.h"

class MediaAdapter : public MediaPlayer {
   public:
    MediaAdapter(std::string audio_type) {
        if (0 == audio_type.compare("vlc")) {
            advanced_music_player = std::make_shared<VlcPlayer>();
        } else if (0 == audio_type.compare("mp4")) {
            advanced_music_player = std::make_shared<Mp4Player>();
        }
    }
    ~MediaAdapter() = default;

    void Play(std::string audio_type, std::string file_name) override {
        if (0 == audio_type.compare("vlc")) {
            advanced_music_player->PlayVlc(file_name);
        } else if (0 == audio_type.compare("mp4")) {
            advanced_music_player->PlayMp4(file_name);
        }
    }

   private:
    std::shared_ptr<AdvancedMediaPlayer> advanced_music_player = nullptr;
};

#endif  // MEDIA_ADAPTER_H_
