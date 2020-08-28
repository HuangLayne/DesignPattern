/**
 * @file BinaryObserver.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BINARY_OBSERVER_H_
#define BINARY_OBSERVER_H_

#include "Observer.h"

class BinaryObserver : public Observer {
   public:
    BinaryObserver(std::shared_ptr<Subject> subject);
    ~BinaryObserver();
    void Update() override;
};

#endif  // BINARY_OBSERVER_H_
