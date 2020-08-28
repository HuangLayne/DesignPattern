/**
 * @file Color.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-15
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef COLOR_H_
#define COLOR_H_

class Color {
   public:
    Color() = default;
    virtual ~Color() = default;
    virtual void Fill() = 0;
};

#endif
