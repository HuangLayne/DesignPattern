/**
 * @file MediaPlayer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef MEDIA_PLAYER_H_
#define MEDIA_PLAYER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaPlayer MediaPlayer;

MediaPlayer* audio_player_create(void);
void media_player_destory(MediaPlayer** media_player);
void media_player_play(MediaPlayer* media_player, const char* audio_type, const char* file_name);

#ifdef __cplusplus
}
#endif
#endif  // MEDIA_PLAYER_H_
