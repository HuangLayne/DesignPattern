/**
 * @file Football.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-28
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef FOOTBALL_H_
#define FOOTBALL_H_

#include <iostream>

#include "Game.h"
class Football : public Game {
   public:
    Football() = default;
    virtual ~Football() = default;

   protected:
    void Initialize() override { std::cout << "Football Game Initialized! Start playing." << std::endl; }
    void StartPlay() override { std::cout << "Football Game Started. Enjoy the game!" << std::endl; }
    void EndPlay() override { std::cout << "Football Game Finished!" << std::endl; }
};

#endif  // FOOTBALL_H_
