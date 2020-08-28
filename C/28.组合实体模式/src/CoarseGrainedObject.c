/**
 * @file CoarseGrainedObject.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CoarseGrainedObject.h"

#include "DependentObject1.h"
#include "DependentObject2.h"
#include "ctools.h"

struct CoarseGrainedObject {
    DependentObject1* do1;
    DependentObject2* do2;
};

CoarseGrainedObject* coarse_grained_object_create(void) {
    CoarseGrainedObject* coarse_grained_object = (CoarseGrainedObject*)calloc(1, sizeof(CoarseGrainedObject));
    if (NULL == coarse_grained_object) return NULL;

    coarse_grained_object->do1 = dependent_object1_create();
    coarse_grained_object->do2 = dependent_object2_create();
    return coarse_grained_object;
}

void coarse_grained_object_destroy(CoarseGrainedObject** coarse_grained_object) {
    if (NULL == coarse_grained_object || NULL == *coarse_grained_object) return;
    CoarseGrainedObject* self = *coarse_grained_object;
    dependent_object1_destroy(&self->do1);
    dependent_object2_destroy(&self->do2);
    freep((void**)coarse_grained_object);
}

void coarse_grained_object_set_data(CoarseGrainedObject* coarse_grained_object, const char* data1, const char* data2) {
    if (NULL == coarse_grained_object) return;
    dependent_object1_set_data(coarse_grained_object->do1, data1);
    dependent_object2_set_data(coarse_grained_object->do2, data2);
}

const char** coarse_grained_object_get_data(CoarseGrainedObject* coarse_grained_object, int* data_length) {
    const char** data = (const char**)calloc(2, sizeof(const char*));
    *data_length = 2;
    data[0] = dependent_object1_get_data(coarse_grained_object->do1);
    data[1] = dependent_object2_get_data(coarse_grained_object->do2);
    return data;
}
