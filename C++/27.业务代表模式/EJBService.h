/**
 * @file EJBService.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef EJB_SERVICE_H_
#define EJB_SERVICE_H_

#include <iostream>

#include "BusinessService.h"

class EJBService : public BusinessService {
   public:
    EJBService() = default;
    virtual ~EJBService() = default;
    void DoProcessing() override { std::cout << "Processing task by invoking EJB Service" << std::endl; }
};

#endif  // EJB_SERVICE_H_
