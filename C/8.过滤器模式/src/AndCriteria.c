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

#include "Criteria.h"
#include "CriteriaStruct.h"
#include "Person.h"
#include "ctools.h"

typedef struct {
    struct Criteria *other_criteria1;
    struct Criteria *other_criteria2;
} priv_t;

static void init(struct Criteria *criteria, struct Criteria *other_criteria1, struct Criteria *other_criteria2) {
    if (NULL == criteria->priv) freep((void **)&criteria->priv);
    criteria->priv = (void *)calloc(1, sizeof(priv_t));

    priv_t *priv = (priv_t *)criteria->priv;
    priv->other_criteria1 = other_criteria1;
    priv->other_criteria2 = other_criteria2;
}

static List *meet_criteria(struct Criteria *criteria, List *persons) {
    priv_t *priv = (priv_t *)criteria->priv;
    List *first_criteria_persons = criteria_meet_criteria(priv->other_criteria1, persons);
    List *result = criteria_meet_criteria(priv->other_criteria2, first_criteria_persons);
    list_destroy(first_criteria_persons);
    return result;
}

static void destroy(struct Criteria *criteria) {
    if (NULL != criteria->priv) freep((void **)&criteria->priv);
}

struct Criteria *criteria_and_create(struct Criteria *other_criteria1, struct Criteria *other_criteria2) {
    struct Criteria *criteria = (struct Criteria *)calloc(1, sizeof(struct Criteria));
    if (NULL == criteria) return NULL;

    init(criteria, other_criteria1, other_criteria2);
    criteria->meet_criteria = meet_criteria;
    criteria->destroy = destroy;
    return criteria;
}
