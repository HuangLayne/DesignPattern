/**
 * @file Shape.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-07
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
   public:
    Shape() = default;
    virtual ~Shape() = default;
    virtual void Draw() = 0;
};
#endif  // SHAPE_H_
