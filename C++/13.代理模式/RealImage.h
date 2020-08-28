/**
 * @file RealImage.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef REAL_IMAGE_H_
#define REAL_IMAGE_H_

#include <iostream>
#include <string>

#include "Image.h"

class RealImage : public Image {
   public:
    RealImage(std::string file_name) : file_name_(file_name) { LoadFromDisk(file_name_); }
    virtual ~RealImage() = default;
    void Display() override { std::cout << "Displaying " << file_name_ << std::endl; }

   private:
    void LoadFromDisk(std::string file_name) { std::cout << "Loading " << file_name_ << std::endl; }

   private:
    std::string file_name_;
};

#endif  // REAL_IMAGE_H_
