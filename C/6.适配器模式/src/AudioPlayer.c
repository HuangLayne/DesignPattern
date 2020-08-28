/**
 * @file AudioPlayer.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-25
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "MediaPlayerStruct.h"
#include "ctools.h"

extern struct MediaPlayer* media_adapter_create(void);

typedef struct {
    struct MediaPlayer* media_adapter;
} priv_t;

static void destroy_media_adapter(struct MediaPlayer** media_adapter) {
    if (NULL == media_adapter || NULL == *media_adapter) return;
    struct MediaPlayer* self = *media_adapter;
    if (NULL != self->destroy) self->destroy(self);

    free(*media_adapter);
    *media_adapter = NULL;
}

static void init(struct MediaPlayer* media_player) { media_player->priv = calloc(1, sizeof(priv_t)); }

static void destroy(struct MediaPlayer* media_player) {
    priv_t* priv = media_player->priv;
    if (NULL != priv) {
        destroy_media_adapter(&priv->media_adapter);
        free(priv);
        media_player->priv = NULL;
    }
}

static void play(struct MediaPlayer* media_player, const char* audio_type, const char* file_name) {
    if (0 == strcasecmp("mp3", audio_type)) {
        printf("Playing mp3 file. Name: %s\n", file_name);
    } else if (0 == strcasecmp("mp4", audio_type) || 0 == strcmp("vlc", audio_type)) {
        priv_t* priv = media_player->priv;
        if (NULL != priv) {
            destroy_media_adapter(&priv->media_adapter);
            priv->media_adapter = media_adapter_create();
            if (NULL != priv->media_adapter->play) {
                priv->media_adapter->play(priv->media_adapter, audio_type, file_name);
            }
        }
    } else {
        printf("Invalid media. %s format not supported\n", audio_type);
    }
}

struct MediaPlayer* audio_player_create(void) {
    struct MediaPlayer* media_adapter = (struct MediaPlayer*)calloc(1, sizeof(struct MediaPlayer));
    if (NULL == media_adapter) return NULL;

    init(media_adapter);
    media_adapter->play = play;
    media_adapter->destroy = destroy;
    return media_adapter;
}
