/**
 * @file Shape.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-10-28
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <memory>
#include <string>

class Shape {
   public:
    Shape() = default;
    virtual ~Shape() = default;
    void SetId(const int id) { this->id = id; }
    int GetId() { return id; }
    std::string GetType() { return type; }
    virtual void Draw() const = 0;
    virtual std::shared_ptr<Shape> Clone() const = 0;

   private:
    int id;

   protected:
    std::string type;
};

#endif  // SHAPE_H_
