/**
 * @file CriteriaStruct.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-07-31
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef CRITERIA_STRUCT_H_
#define CRITERIA_STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Person.h"
#include "list.h"

struct Criteria {
    void* priv;

    List* (*meet_criteria)(struct Criteria* criteria, List* persons);
    void (*destroy)(struct Criteria* criteria);
};

#ifdef __cplusplus
}
#endif
#endif  // CRITERIA_STRUCT_H_
