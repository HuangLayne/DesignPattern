/**
 * @file VlcPlayer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef VLC_PLAYER_H_
#define VLC_PLAYER_H_

#include <iostream>

#include "AdvancedMediaPlayer.h"

class VlcPlayer : public AdvancedMediaPlayer {
   public:
    VlcPlayer() = default;
    ~VlcPlayer() = default;
    void PlayVlc(std::string file_name) override { std::cout << "Playing vlc file. Name: " << file_name << std::endl; }
    void PlayMp4(std::string file_name) override {}
};

#endif  // VLC_PLAYER_H_
