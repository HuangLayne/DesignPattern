/**
 * @file CriteriaMale.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CriteriaStruct.h"
#include "ctools.h"

static List *meet_criteria(struct Criteria *criteria, List *persons) {
    List *female_persons = list_create();
    ListIterator *it = list_iterator_new(persons, LIST_HEAD);
    ListNode *node;
    while ((node = list_iterator_next(it))) {
        Person *person = (Person *)node->val;
        if (0 == strcasecmp("FEMALE", person_get_gender(person))) {
            list_push_back(female_persons, list_node_new((int64_t)person));
        }
    }
    list_iterator_destroy(it);
    return female_persons;
}

struct Criteria *criteria_female_create(void) {
    struct Criteria *criteria = (struct Criteria *)calloc(1, sizeof(struct Criteria));
    if (NULL == criteria) return NULL;

    criteria->meet_criteria = meet_criteria;
    return criteria;
}
