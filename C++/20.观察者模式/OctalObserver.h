/**
 * @file OctalObserver.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef OCTAL_OBSERVER_H_
#define OCTAL_OBSERVER_H_

#include "Observer.h"

class OctalObserver : public Observer {
   public:
    OctalObserver(std::shared_ptr<Subject> subject);
    ~OctalObserver();
    void Update() override;
};

#endif  // OCTAL_OBSERVER
