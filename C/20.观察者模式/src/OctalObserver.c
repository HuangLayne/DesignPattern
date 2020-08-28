/**
 * @file OctalObserver.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-09
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <stdio.h>

#include "ObserverStruct.h"
#include "Subject.h"
#include "ctools.h"

static void update(struct Observer* observer) {
    if (NULL == observer) return;
    printf("Octal String: %o\n", subject_get_state(observer->subject));
}

struct Observer* octal_observer_create(struct Subject* subject) {
    struct Observer* observer = (struct Observer*)calloc(1, sizeof(struct Observer));
    if (NULL == observer) return NULL;

    observer->subject = subject;
    observer->update = update;
    subject_attach(subject, observer);
    return observer;
}
