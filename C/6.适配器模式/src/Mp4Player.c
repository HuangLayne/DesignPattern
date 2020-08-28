/**
 * @file Mp4Player.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "AdvancedMediaPlayerStruct.h"
#include "ctools.h"

static void play_vlc(struct AdvancedMediaPlayer* advanced_media_player, const char* file_name) {}

static void play_mp4(struct AdvancedMediaPlayer* advanced_media_player, const char* file_name) {
    printf("Playing mp4 file. Name: %s\n", file_name);
}

struct AdvancedMediaPlayer* mp4_player_create(void) {
    struct AdvancedMediaPlayer* player = (struct AdvancedMediaPlayer*)calloc(1, sizeof(struct AdvancedMediaPlayer));
    player->play_mp4 = play_mp4;
    player->play_vlc = play_vlc;

    return player;
}
