/**
 * @file Game.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Game.h"

#include "GameStruct.h"
#include "ctools.h"

void game_play_default(struct Game* game) {
    if (NULL == game) return;
    if (NULL != game->initialize) game->initialize(game);
    if (NULL != game->start_play) game->start_play(game);
    if (NULL != game->end_play) game->end_play(game);
}

void game_destroy(Game** game) {
    if (NULL == game || NULL == *game) return;
    if (NULL != (*game)->destroy) (*game)->destroy(*game);
    freep((void**)game);
}

void game_play(Game* game) {
    if (NULL == game || NULL == game->play) return;
    game->play(game);
}
