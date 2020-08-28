/**
 * @file Green.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef GREEN_H_
#define GREEN_H_

#include <iostream>

#include "Color.h"

class Green : public Color {
   public:
    Green() = default;
    ~Green() = default;
    void Fill() override;
};

void Green::Fill() { std::cout << "Inside Green::fill() method." << std::endl; }

#endif
