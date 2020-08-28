/**
 * @file CriteriaPatternDemo.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "Criteria.h"
#include "Person.h"

static void print_persons(List *persons) {
    ListIterator *it = list_iterator_new(persons, LIST_HEAD);
    ListNode *node;

    while ((node = list_iterator_next(it))) {
        Person *person = (Person *)node->val;
        printf("Person : [ Name : %s, Gender : %s, Marital Status : %s ]\n", person_get_name(person),
               person_get_gender(person), person_get_marital_status(person));
    }
    list_iterator_destroy(it);
}

int main(int argc, char const *argv[]) {
    List *persons = list_create();
    persons->free_func = (void (*)(long long))person_destory;
    list_push_back(persons, list_node_new((int64_t)person_create("Robert", "Male", "Single")));
    list_push_back(persons, list_node_new((int64_t)person_create("John", "Male", "Married")));
    list_push_back(persons, list_node_new((int64_t)person_create("Laura", "Female", "Married")));
    list_push_back(persons, list_node_new((int64_t)person_create("Diana", "Female", "Single")));
    list_push_back(persons, list_node_new((int64_t)person_create("Mike", "Male", "Single")));
    list_push_back(persons, list_node_new((int64_t)person_create("Bobby", "Male", "Single")));

    Criteria *male = criteria_male_create();
    Criteria *female = criteria_female_create();
    Criteria *single = criteria_single_create();
    Criteria *single_male = criteria_and_create(single, male);
    Criteria *single_or_female = criteria_or_create(single, female);

    printf("Males: \n");
    List *male_list = criteria_meet_criteria(male, persons);
    print_persons(male_list);
    list_destroy(male_list);

    printf("Females: \n");
    List *female_list = criteria_meet_criteria(female, persons);
    print_persons(female_list);
    list_destroy(female_list);

    printf("Single Males: \n");
    List *single_list = criteria_meet_criteria(single_male, persons);
    print_persons(single_list);
    list_destroy(single_list);

    printf("Single Or Females: \n");
    List *single_or_female_list = criteria_meet_criteria(single_or_female, persons);
    print_persons(single_or_female_list);
    list_destroy(single_or_female_list);

    Criteria_destory(&male);
    Criteria_destory(&female);
    Criteria_destory(&single);
    Criteria_destory(&single_male);
    Criteria_destory(&single_or_female);

    list_destroy(persons);

    return 0;
}
