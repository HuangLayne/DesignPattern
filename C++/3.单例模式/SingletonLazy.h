/**
 * @file SingletonLazy.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-16
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef SINGLETON_LAZY_H_
#define SINGLETON_LAZY_H_

#include <iostream>

/**
 * @brief 懒汉式单例模式
 *
 */
class SingletonLazy {
   public:
    static SingletonLazy &getInstance() {
        static SingletonLazy instance;
        return instance;
    }
    void ShowMessage() { std::cout << "Singleton Lazy" << std::endl; }

   private:
    SingletonLazy() = default;
    ~SingletonLazy() = default;
    SingletonLazy(const SingletonLazy &) = delete;
    SingletonLazy &operator=(const SingletonLazy &) = delete;
};

#endif  // SINGLETON_LAZY_H_
