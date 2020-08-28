/**
 * @file CriteriaPatternDemo.cpp
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-05
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "AndCriteria.h"
#include "CriteriaFemale.h"
#include "CriteriaMale.h"
#include "CriteriaSingle.h"
#include "OrCriteria.h"

static void PrintPerson(std::shared_ptr<std::list<Person>> persons) {
    for (auto& person : *persons) {
        std::cout << "Person: [ Name : " << person.GetName()
                  << ", Gender :" + person.GetGender() + ", Marital Status : " << person.GetMaritalStatus() << "]"
                  << std::endl;
    }
}

int main(int argc, char const* argv[]) {
    std::shared_ptr<std::list<Person>> persons = std::make_shared<std::list<Person>>();
    persons->emplace_back("Robert", "Male", "Single");
    persons->emplace_back("John", "Male", "Married");
    persons->emplace_back("Laura", "Female", "Married");
    persons->emplace_back("Diana", "Female", "Single");
    persons->emplace_back("Mike", "Male", "Single");
    persons->emplace_back("Bobby", "Male", "Single");

    std::shared_ptr<Criteria> male = std::make_shared<CriteriaMale>();
    std::shared_ptr<Criteria> female = std::make_shared<CriteriaFemale>();
    std::shared_ptr<Criteria> single = std::make_shared<CriteriaSingle>();
    std::shared_ptr<Criteria> single_male = std::make_shared<AndCriteria>(single, male);
    std::shared_ptr<Criteria> single_or_female = std::make_shared<OrCriteria>(single, female);

    std::cout << "Males: " << std::endl;
    PrintPerson(male->MeetCriteria(persons));

    std::cout << "Females: " << std::endl;
    PrintPerson(female->MeetCriteria(persons));

    std::cout << "Single Males: " << std::endl;
    PrintPerson(single_male->MeetCriteria(persons));

    std::cout << "Single Or Females: " << std::endl;
    PrintPerson(single_or_female->MeetCriteria(persons));

    return 0;
}
