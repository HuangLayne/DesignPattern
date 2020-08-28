/**
 * @file CoarseGrainedObject.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-15
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef COARSE_GRAINED_OBJECT_H_
#define COARSE_GRAINED_OBJECT_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CoarseGrainedObject CoarseGrainedObject;

CoarseGrainedObject* coarse_grained_object_create(void);

void coarse_grained_object_destroy(CoarseGrainedObject** coarse_grained_object);

void coarse_grained_object_set_data(CoarseGrainedObject* coarse_grained_object, const char* data1, const char* data2);

const char** coarse_grained_object_get_data(CoarseGrainedObject* coarse_grained_object, int* data_length);

#ifdef __cplusplus
}
#endif
#endif  // COARSE_GRAINED_OBJECT_H_
