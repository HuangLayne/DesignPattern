/**
 * @file Game.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef GAME_H_
#define GAME_H_

class Game {
   public:
    Game() = default;
    virtual ~Game() = default;
    void Play() {
        //初始化游戏
        Initialize();
        //开始游戏
        StartPlay();
        //结束游戏
        EndPlay();
    }

   protected:
    virtual void Initialize() = 0;
    virtual void StartPlay() = 0;
    virtual void EndPlay() = 0;
};

#endif  // GAME_H_
