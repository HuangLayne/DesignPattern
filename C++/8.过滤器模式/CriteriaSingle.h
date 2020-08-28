/**
 * @file CriteriaSingle.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CRITERIA_SINGLE_H_
#define CRITERIA_SINGLE_H_

#include "Criteria.h"

class CriteriaSingle : public Criteria {
   public:
    CriteriaSingle() = default;
    ~CriteriaSingle() = default;

    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) override {
        std::shared_ptr<std::list<Person>> single_persons = std::make_shared<std::list<Person>>();
        for (auto& person : *persons) {
            if (person.GetMaritalStatus() == "Single") {
                single_persons->push_back(person);
            }
        }
        return single_persons;
    }
};

#endif  // CRITERIA_SINGLE_H_
