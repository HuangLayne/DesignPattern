/**
 * @file Blue.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef BLUE_H_
#define BLUE_H_

#include <iostream>

#include "Color.h"

class Blue : public Color {
   public:
    Blue() = default;
    ~Blue() = default;
    void Fill() override;
};

void Blue::Fill() { std::cout << "Inside Blue::fill() method." << std::endl; }

#endif
