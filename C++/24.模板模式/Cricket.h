/**
 * @file Cricket.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CRICKET_H_
#define CRICKET_H_

#include <iostream>

#include "Game.h"

class Cricket : public Game {
   public:
    Cricket() = default;
    virtual ~Cricket() = default;

   protected:
    void Initialize() override { std::cout << "Cricket Game Initialized! Start playing." << std::endl; }
    void StartPlay() override { std::cout << "Cricket Game Started. Enjoy the game!" << std::endl; }
    void EndPlay() override { std::cout << "Cricket Game Finished!" << std::endl; }
};

#endif  // CRICKET_H_
