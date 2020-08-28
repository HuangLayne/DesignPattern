/**
 * @file TemplatePatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <memory>

#include "Cricket.h"
#include "Football.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<Game> game = std::make_shared<Cricket>();
    game->Play();

    std::cout << std::endl;
    game = std::make_shared<Football>();
    game->Play();
    return 0;
}
