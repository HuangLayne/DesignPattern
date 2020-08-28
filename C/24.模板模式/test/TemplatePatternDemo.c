/**
 * @file TemplatePatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-14
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Game.h"

int main(int argc, char const* argv[]) {
    Game* game = game_create_cricket();
    game_play(game);
    game_destroy(&game);
    printf("\n");

    game = game_create_football();
    game_play(game);
    game_destroy(&game);

    return 0;
}
