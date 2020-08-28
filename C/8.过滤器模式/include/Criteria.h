/**
 * @file Criteria.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef CRITERIA_H_
#define CRITERIA_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "list.h"

typedef struct Criteria Criteria;

Criteria* criteria_female_create(void);
Criteria* criteria_male_create(void);
Criteria* criteria_single_create(void);
Criteria* criteria_and_create(struct Criteria* other_criteria1, struct Criteria* other_criteria2);
Criteria* criteria_or_create(struct Criteria* other_criteria1, struct Criteria* other_criteria2);
void Criteria_destory(Criteria** criteria);
List* criteria_meet_criteria(Criteria* criteria, List* persons);

#ifdef __cplusplus
}
#endif
#endif  // CRITERIA_H_
