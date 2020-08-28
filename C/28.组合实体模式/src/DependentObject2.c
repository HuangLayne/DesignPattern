/**
 * @file DependentObject2.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "DependentObject2.h"

#include "ctools.h"

struct DependentObject2 {
    const char* data;
};

DependentObject2* dependent_object2_create(void) {
    DependentObject2* dependent_object2 = (DependentObject2*)calloc(1, sizeof(DependentObject2));
    return dependent_object2;
}

void dependent_object2_destroy(DependentObject2** dependent_object2) {
    if (NULL == dependent_object2 || NULL == *dependent_object2) return;
    freep((void**)&(*dependent_object2)->data);
    freep((void**)dependent_object2);
}

void dependent_object2_set_data(DependentObject2* dependent_object2, const char* data) {
    if (NULL == dependent_object2) return;
    freep((void**)&dependent_object2->data);
    dependent_object2->data = cstrdup(data);
}

const char* dependent_object2_get_data(DependentObject2* dependent_object2) {
    if (NULL == dependent_object2) return NULL;
    return dependent_object2->data;
}
