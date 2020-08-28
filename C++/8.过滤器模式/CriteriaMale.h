/**
 * @file CriteriaMale.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef CIRTERIA_MALE_H_
#define CIRTERIA_MALE_H_

#include "Criteria.h"

class CriteriaMale : public Criteria {
   public:
    CriteriaMale() = default;
    ~CriteriaMale() = default;

    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) override {
        std::shared_ptr<std::list<Person>> male_persons = std::make_shared<std::list<Person>>();
        for (auto& person : *persons) {
            if (person.GetGender() == "Male") {
                male_persons->push_back(person);
            }
        }
        return male_persons;
    }
};

#endif  // CIRTERIA_MALE_H_
