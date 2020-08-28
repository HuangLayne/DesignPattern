/**
 * @file GameStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef GAME_STRUCT_H_
#define GAME_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

struct Game {
    void* priv;

    void (*initialize)(struct Game* game);
    void (*start_play)(struct Game* game);
    void (*end_play)(struct Game* game);
    void (*play)(struct Game* game);
    void (*destroy)(struct Game* game);
};

void game_play_default(struct Game* game);

#ifdef __cplusplus
}
#endif
#endif  // GAME_STRUCT_H_
