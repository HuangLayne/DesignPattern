#ifndef AND_CRITERIA_H_
#define AND_CRITERIA_H_

#include "Criteria.h"

class AndCriteria : public Criteria {
   public:
    AndCriteria(std::shared_ptr<Criteria> criteria, std::shared_ptr<Criteria> other_criteria) {
        this->criteria_ = criteria;
        this->other_criteria_ = other_criteria;
    }
    ~AndCriteria() = default;

    virtual std::shared_ptr<std::list<Person>> MeetCriteria(std::shared_ptr<std::list<Person>> persons) override {
        std::shared_ptr<std::list<Person>> first_criteria_persons = criteria_->MeetCriteria(persons);

        return other_criteria_->MeetCriteria(first_criteria_persons);
    }

   private:
    std::shared_ptr<Criteria> criteria_;
    std::shared_ptr<Criteria> other_criteria_;
};

#endif  // AND_CRITERIA_H_
