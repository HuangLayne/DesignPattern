/**
 * @file Subject.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */
#ifndef SUBJECT_H_
#define SUBJECT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Observer.h"

Subject* subject_create(void);
void subject_destroy(Subject** subject);
int subject_get_state(Subject* subject);
void subject_set_state(Subject* subject, int state);
void subject_attach(Subject* subject, Observer* observer);
void subject_notify_all_observers(Subject* subject);

#ifdef __cplusplus
}
#endif
#endif  // SUBJECT_H_
