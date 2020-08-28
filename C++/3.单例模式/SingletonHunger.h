/**
 * @file SingletonHunger.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-16
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef SINGLETON_HUNGER_H_
#define SINGLETON_HUNGER_H_

#include <iostream>

/**
 * @brief 饿汉式单例模式
 *
 */
class SingletonHunger {
   public:
    static SingletonHunger &getInstance() { return instance; }
    void ShowMessage() { std::cout << "Singleton Hunger" << std::endl; }

   private:
    SingletonHunger() = default;
    ~SingletonHunger() = default;
    SingletonHunger(const SingletonHunger &) = delete;
    SingletonHunger &operator=(const SingletonHunger &) = delete;

   private:
    static SingletonHunger instance;
};

SingletonHunger SingletonHunger::instance;

#endif  // SINGLETON_HUNGER_H_
