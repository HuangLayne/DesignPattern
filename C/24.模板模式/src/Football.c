/**
 * @file Football.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "GameStruct.h"
#include "ctools.h"

static void initialize(struct Game* game) { printf("Football Game Initialized! Start playing.\n"); }

static void start_play(struct Game* game) { printf("Football Game Started. Enjoy the game!\n"); }

static void end_play(struct Game* game) { printf("Football Game Finished!\n"); }

struct Game* game_create_football(void) {
    struct Game* game = (struct Game*)calloc(1, sizeof(struct Game));
    if (NULL == game) return NULL;

    game->initialize = initialize;
    game->start_play = start_play;
    game->end_play = end_play;
    game->play = game_play_default;
    return game;
}
