/**
 * @file Game.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef GAME_H_
#define GAME_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Game Game;

Game* game_create_cricket(void);

Game* game_create_football(void);

void game_destroy(Game** game);

void game_play(Game* game);

#ifdef __cplusplus
}
#endif
#endif  // GAME_H_
