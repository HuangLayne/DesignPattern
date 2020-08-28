/**
 * @file Criteria.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CIRTERIA_H_
#define CIRTERIA_H_

#include <list>
#include <memory>

#include "Person.h"

class Criteria {
   public:
    Criteria() = default;
    virtual ~Criteria() = default;
    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) = 0;
};

#endif  // CIRTERIA_H_
