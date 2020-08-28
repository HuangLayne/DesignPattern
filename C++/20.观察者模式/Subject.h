/**
 * @file Subject.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SUBJECT_H_
#define SUBJECT_H_

#include <list>

#include "Observer.h"

class Subject {
   public:
    Subject();
    ~Subject();
    void SetState(const int state);
    int GetState();
    void Attach(Observer* observer);
    void NotifyAllObservers();

   private:
    // std::list<std::shared_ptr<Observer>> observer_list_;
    std::list<Observer*> observer_list_;
    int state_;
};

#endif  // SUBJECT_H_
