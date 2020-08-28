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
#ifndef MEDIA_PLAYER_STRUCT_H_
#define MEDIA_PLAYER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct MediaPlayer {
    void* priv;

    void (*play)(struct MediaPlayer*, const char* audio_type, const char* file_name);
    void (*destroy)(struct MediaPlayer*);
};

#ifdef __cplusplus
}
#endif
#endif  // MEDIA_PLAYER_STRUCT_H_
