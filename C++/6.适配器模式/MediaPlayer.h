/**
 * @file MediaPlayer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MEDIA_PLAYER_H_
#define MEDIA_PLAYER_H_
#include <string>

class MediaPlayer {
   public:
    MediaPlayer() = default;
    virtual ~MediaPlayer() = default;
    virtual void Play(std::string audio_type, std::string file_name) = 0;
};

#endif  // MEDIA_PLAYER_H_
