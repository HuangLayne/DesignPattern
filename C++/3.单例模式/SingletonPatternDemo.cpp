/**
 * @file SingletonPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-16
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "SingletonHunger.h"
#include "SingletonLazy.h"

int main(int argc, char const *argv[]) {
    SingletonHunger &hunger1 = SingletonHunger::getInstance();
    hunger1.ShowMessage();
    SingletonHunger &hunger2 = SingletonHunger::getInstance();
    hunger2.ShowMessage();

    SingletonLazy &lazy1 = SingletonLazy::getInstance();
    lazy1.ShowMessage();
    SingletonLazy &lazy2 = SingletonLazy::getInstance();
    lazy2.ShowMessage();

    return 0;
}
