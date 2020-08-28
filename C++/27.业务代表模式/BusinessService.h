/**
 * @file BusinessService.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-03
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef BUSINESS_SERVICE_H_
#define BUSINESS_SERVICE_H_

class BusinessService {
   public:
    BusinessService() = default;
    virtual ~BusinessService() = default;
    virtual void DoProcessing() = 0;
};

#endif  // BUSINESS_SERVICE_H_
