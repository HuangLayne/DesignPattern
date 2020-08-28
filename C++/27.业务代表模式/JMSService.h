/**
 * @file JMSService.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef JMS_SERVICE_H_
#define JMS_SERVICE_H_

#include <iostream>

#include "BusinessService.h"
class JMSService : public BusinessService {
   public:
    JMSService() = default;
    virtual ~JMSService() = default;
    void DoProcessing() override { std::cout << "Processing task by invoking JMS Service" << std::endl; }
};

#endif  // JMS_SERVICE_H_
