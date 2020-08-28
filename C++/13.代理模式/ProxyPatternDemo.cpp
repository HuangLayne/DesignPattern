/**
 * @file ProxyPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "ProxyImage.h"

int main(int argc, char const *argv[]) {
    Image *image = new ProxyImage("test_10mb.jpg");
    image->Display();

    std::cout << std::endl;

    image->Display();

    if (nullptr != image) {
        delete image;
        image = nullptr;
    }
    return 0;
}
