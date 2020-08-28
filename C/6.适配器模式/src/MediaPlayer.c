/**
 * @file MediaPlayer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "MediaPlayer.h"

#include "MediaPlayerStruct.h"
#include "ctools.h"

void media_player_destory(MediaPlayer** media_player) {
    if (NULL == media_player || NULL == *media_player) return;

    struct MediaPlayer* self = *media_player;
    if (NULL != self->destroy) self->destroy(self);
    free(*media_player);
    *media_player = NULL;
}

void media_player_play(MediaPlayer* media_player, const char* audio_type, const char* file_name) {
    if (NULL != media_player->play) {
        media_player->play(media_player, audio_type, file_name);
    }
}
