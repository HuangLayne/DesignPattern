/**
 * @file Observer.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_
#include <memory>

class Subject;
class Observer {
   public:
    Observer() = default;
    virtual ~Observer() = default;
    virtual void Update() = 0;

   protected:
    std::shared_ptr<Subject> subject_;
};

#endif  // OBSERVER_H_
