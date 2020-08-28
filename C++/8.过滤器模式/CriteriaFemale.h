/**
 * @file CriteriaFemale.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */
#ifndef CRITERIA_FEMALE_H_
#define CRITERIA_FEMALE_H_

#include "Criteria.h"

class CriteriaFemale : public Criteria {
   public:
    CriteriaFemale() = default;
    ~CriteriaFemale() = default;

    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) override {
        std::shared_ptr<std::list<Person>> female_persons = std::make_shared<std::list<Person>>();
        for (auto& person : *persons) {
            if (person.GetGender() == "Female") {
                female_persons->push_back(person);
            }
        }
        return female_persons;
    }
};

#endif  // CRITERIA_FEMALE_H_
