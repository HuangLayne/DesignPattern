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
#include "RealImage.h"

class ProxyImage : public Image {
   public:
    ProxyImage(std::string file_name) : file_name_(file_name) {}
    virtual ~ProxyImage() {
        if (nullptr != real_image_) {
            delete real_image_;
            real_image_ = nullptr;
        }
    }
    void Display() override {
        if (nullptr == real_image_) {
            real_image_ = new RealImage(file_name_);
        }
        real_image_->Display();
    }

   private:
    std::string file_name_ = nullptr;
    RealImage* real_image_ = nullptr;
};

#endif  //  PROXY_IMAGE_H_
