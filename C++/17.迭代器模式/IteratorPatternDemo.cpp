/**
 * @file IteratorPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-19
 *
 * @copyright Copyright (c) 2019
 *
 */

#include <iostream>

#include "NameRepository.h"

int main(int argc, char const *argv[]) {
    std::shared_ptr<NameRepository<std::string>> names_repository = std::make_shared<NameRepository<std::string>>();

    for (std::shared_ptr<Iterator<std::string>> iter = names_repository->GetIterator(); iter->HasNext();) {
        std::string name = iter->Next();
        std::cout << "Name: " << name << std::endl;
    }
    return 0;
}
