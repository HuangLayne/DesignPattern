/**
 * @file MediaAdapter.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "AdvancedMediaPlayerStruct.h"
#include "MediaPlayerStruct.h"
#include "ctools.h"

extern struct AdvancedMediaPlayer* mp4_player_create(void);
extern struct AdvancedMediaPlayer* vlc_player_create(void);

typedef struct {
    struct AdvancedMediaPlayer* advanced_music_player;
} priv_t;

static void destroy_advanced_media_player(struct AdvancedMediaPlayer** advanced_media_player) {
    if (NULL == advanced_media_player || NULL == *advanced_media_player) return;

    free(*advanced_media_player);
    *advanced_media_player = NULL;
}

static void init(struct MediaPlayer* media_player) { media_player->priv = (priv_t*)calloc(1, sizeof(priv_t)); }

static void destroy(struct MediaPlayer* media_player) {
    priv_t* priv = media_player->priv;
    if (NULL != priv) destroy_advanced_media_player(&priv->advanced_music_player);
    free(media_player->priv);
    media_player->priv = NULL;
}

static void play(struct MediaPlayer* media_player, const char* audio_type, const char* file_name) {
    priv_t* priv = media_player->priv;
    destroy_advanced_media_player(&priv->advanced_music_player);

    if (0 == strcasecmp("vlc", audio_type)) {
        priv->advanced_music_player = vlc_player_create();
        if (NULL != priv->advanced_music_player->play_vlc) {
            priv->advanced_music_player->play_vlc(priv->advanced_music_player, file_name);
        }
    } else if (0 == strcasecmp("mp4", audio_type)) {
        priv->advanced_music_player = mp4_player_create();
        if (NULL != priv->advanced_music_player->play_mp4) {
            priv->advanced_music_player->play_mp4(priv->advanced_music_player, file_name);
        }
    }
}

struct MediaPlayer* media_adapter_create(void) {
    struct MediaPlayer* media_adapter = (struct MediaPlayer*)calloc(1, sizeof(struct MediaPlayer));
    if (NULL == media_adapter) return NULL;

    init(media_adapter);
    media_adapter->play = play;
    media_adapter->destroy = destroy;
    return media_adapter;
}
