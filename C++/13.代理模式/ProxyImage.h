/**
 * @file ProxyImage.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef PROXY_IMAGE_H_
#define PROXY_IMAGE_H_

#include <memory>

#include "RealImage.h"

class ProxyImage : public Image {
   public:
    ProxyImage(std::string file_name) : file_name_(file_name) {}
    virtual ~ProxyImage() = default;
    void Display() override {
        if (nullptr == real_image_) {
            real_image_ = std::make_shared<RealImage>(file_name_);
        }
        real_image_->Display();
    }

   private:
    std::string file_name_ = nullptr;
    std::shared_ptr<RealImage> real_image_ = nullptr;
};

#endif  //  PROXY_IMAGE_H_
