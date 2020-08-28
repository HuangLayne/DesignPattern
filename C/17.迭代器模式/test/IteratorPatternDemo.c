/**
 * @file IteratorPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Iterator.h"
#include "NameRepository.h"

int main(int argc, char const* argv[]) {
    NameRepository* names_repository = name_repository_create();
    Iterator* iterator = name_repository_get_iterator(names_repository);

    while (iterator_has_next(iterator)) {
        const char* name = (const char*)iterator_next(iterator);
        printf("Name : %s\n", name);
    }

    name_repository_destroy(&names_repository);
    iterator_destroy(&iterator);
    return 0;
}
