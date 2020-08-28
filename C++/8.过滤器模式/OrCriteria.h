/**
 * @file OrCriteria.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef OR_CRITERIA_H_
#define OR_CRITERIA_H_

#include <algorithm>

#include "Criteria.h"

class OrCriteria : public Criteria {
   public:
    OrCriteria(std::shared_ptr<Criteria> criteria, std::shared_ptr<Criteria> other_criteria) {
        this->criteria_ = criteria;
        this->other_criteria_ = other_criteria;
    }
    ~OrCriteria() = default;

    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) override {
        std::shared_ptr<std::list<Person>> first_criteria_persons = criteria_->MeetCriteria(persons);

        std::shared_ptr<std::list<Person>> other_criteria_persons = other_criteria_->MeetCriteria(persons);

        for (auto& person : *other_criteria_persons) {
            if (std::find(first_criteria_persons->begin(), first_criteria_persons->end(), person) ==
                first_criteria_persons->end()) {
                first_criteria_persons->push_back(person);
            }
        }

        return first_criteria_persons;
    }

   private:
    std::shared_ptr<Criteria> criteria_;
    std::shared_ptr<Criteria> other_criteria_;
};

#endif  // OR_CRITERIA_H_
