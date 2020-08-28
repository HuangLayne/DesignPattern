/**
 * @file Criteria.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Criteria.h"

#include "CriteriaStruct.h"
#include "ctools.h"

void Criteria_destory(Criteria** criteria) {
    if (NULL == criteria || NULL == *criteria) return;
    if (NULL != (*criteria)->destroy) {
        (*criteria)->destroy(*criteria);
    }
    freep((void**)criteria);
}

List* criteria_meet_criteria(Criteria* criteria, List* persons) {
    if (NULL == criteria->meet_criteria || NULL == persons) return NULL;
    return criteria->meet_criteria(criteria, persons);
}
