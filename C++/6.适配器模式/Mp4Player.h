/**
 * @file Mp4Player.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-30
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef MP4_PLAYER_H_
#define MP4_PLAYER_H_

#include <iostream>

#include "AdvancedMediaPlayer.h"

class Mp4Player : public AdvancedMediaPlayer {
   public:
    Mp4Player() = default;
    ~Mp4Player() = default;
    void PlayVlc(std::string file_name) override {}
    void PlayMp4(std::string file_name) override { std::cout << "Playing mp4 file. Name: " << file_name << std::endl; }
};

#endif  // MP4_PLAYER_H_
