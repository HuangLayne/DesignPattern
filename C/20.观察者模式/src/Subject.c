/**
 * @file Subject.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Subject.h"

#include "ctools.h"

struct Subject {
    int state;
    List* observers;
};

Subject* subject_create(void) {
    Subject* subject = (Subject*)calloc(1, sizeof(Subject));
    if (NULL == subject) return subject;

    subject->observers = list_create();
    return subject;
}

void subject_destroy(Subject** subject) {
    if (NULL == subject || NULL == *subject) return;
    Subject* self = *subject;
    list_destroy(self->observers);
    freep((void**)subject);
}

int subject_get_state(Subject* subject) {
    if (NULL == subject) return INT32_MIN;
    return subject->state;
}

void subject_set_state(Subject* subject, int state) {
    if (NULL == subject) return;
    subject->state = state;
    subject_notify_all_observers(subject);
}

void subject_attach(Subject* subject, Observer* observer) {
    if (NULL == subject || NULL == subject->observers) return;
    list_push_back(subject->observers, list_node_new((int64_t)observer));
}

void subject_notify_all_observers(Subject* subject) {
    if (NULL == subject || NULL == subject->observers) return;
    ListIterator* it = list_iterator_new(subject->observers, LIST_HEAD);
    ListNode* node;

    while ((node = list_iterator_next(it))) {
        Observer* observer = (Observer*)node->val;
        observer_update(observer);
    }
    list_iterator_destroy(it);
}
