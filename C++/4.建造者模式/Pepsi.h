/**
 * @file Pepsi.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-23
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef PEPSI_H_
#define PEPSI_H_

#include "ColdDrink.h"
class Pepsi : public ColdDrink {
   public:
    Pepsi() = default;
    ~Pepsi() = default;
    std::string Name() override { return "Pepsi"; }
    float Price() override { return 35.0f; }
};

#endif  // PEPSI_H_
