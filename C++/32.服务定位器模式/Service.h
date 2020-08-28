/**
 * @file Service.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-12-10
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef SERVICE_H_
#define SERVICE_H_

#include <string>
class Service {
   public:
    Service(/* args */) = default;
    virtual ~Service() = default;
    virtual std::string GetName() = 0;
    virtual void Execute() = 0;
};

#endif  // SERVICE_H_
