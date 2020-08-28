/**
 * @file HexaObserver.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-21
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef HEXA_OBSERVER_H_
#define HEXA_OBSERVER_H_

#include "Observer.h"

class HexaObserver : public Observer {
   public:
    HexaObserver(std::shared_ptr<Subject> subject);
    ~HexaObserver();
    void Update() override;
};

#endif  // HEXA_OBSERVER_H_
