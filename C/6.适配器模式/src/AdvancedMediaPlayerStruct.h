/**
 * @file AdvancedMediaPlayerStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef ADVANCED_MEDIA_PLAYER_STRUCT_H_
#define ADVANCED_MEDIA_PLAYER_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct AdvancedMediaPlayer {
    void* priv;

    void (*play_vlc)(struct AdvancedMediaPlayer*, const char* file_name);
    void (*play_mp4)(struct AdvancedMediaPlayer*, const char* file_name);
    void (*destroy)(struct AdvancedMediaPlayer*);
};

#ifdef __cplusplus
}
#endif
#endif  // ADVANCED_MEDIA_PLAYER_STRUCT_H_
