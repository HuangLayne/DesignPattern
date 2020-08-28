/**
 * @file Red.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef RED_H_
#define RED_H_

#include <iostream>

#include "Color.h"

class Red : public Color {
   public:
    Red() = default;
    ~Red() = default;
    void Fill() override;
};

void Red::Fill() { std::cout << "Inside Red::fill() method." << std::endl; }

#endif
