/**
 * @file CompositeEntity.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "CompositeEntity.h"

#include "CoarseGrainedObject.h"
#include "ctools.h"

struct CompositeEntity {
    CoarseGrainedObject* coarse_grained_object;
};

CompositeEntity* composite_entity_create(void) {
    CompositeEntity* composite_entity = (CompositeEntity*)calloc(1, sizeof(CompositeEntity));
    if (NULL == composite_entity) return NULL;

    composite_entity->coarse_grained_object = coarse_grained_object_create();
    return composite_entity;
}

void composite_entity_destroy(CompositeEntity** composite_entity) {
    if (NULL == composite_entity || NULL == *composite_entity) return;
    CompositeEntity* self = *composite_entity;
    coarse_grained_object_destroy(&self->coarse_grained_object);
    freep((void**)composite_entity);
}

void composite_entity_set_data(CompositeEntity* composite_entity, const char* data1, const char* data2) {
    if (NULL == composite_entity) return;
    coarse_grained_object_set_data(composite_entity->coarse_grained_object, data1, data2);
}

const char** composite_entity_get_data(CompositeEntity* composite_entity, int* data_length) {
    if (NULL == composite_entity) {
        *data_length = 0;
        return NULL;
    }
    return coarse_grained_object_get_data(composite_entity->coarse_grained_object, data_length);
}
