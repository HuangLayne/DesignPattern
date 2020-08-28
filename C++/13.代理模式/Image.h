/**
 * @file Image.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-12
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef IMAGE_H_
#define IMAGE_H_

class Image {
   public:
    Image() = default;
    virtual ~Image() = default;
    virtual void Display() = 0;
};

#endif  // IMAGE_H_
