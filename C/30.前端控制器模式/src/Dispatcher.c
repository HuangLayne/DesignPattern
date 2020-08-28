/**
 * @file Dispatcher.c
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2020-08-16
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "Dispatcher.h"

#include "HomeView.h"
#include "StudentView.h"
#include "ctools.h"

struct Dispatcher {
    StudentView* student_view;
    HomeView* home_view;
};

Dispatcher* dispatcher_create(void) {
    Dispatcher* dispatcher = (Dispatcher*)calloc(1, sizeof(Dispatcher));
    if (NULL == dispatcher) return NULL;

    dispatcher->student_view = student_view_create();
    dispatcher->home_view = home_view_create();
    return dispatcher;
}

void dispatcher_destroy(Dispatcher** dispatcher) {
    if (NULL == dispatcher || NULL == *dispatcher) return;
    Dispatcher* self = *dispatcher;
    student_view_destroy(&self->student_view);
    home_view_destroy(&self->home_view);
    freep((void**)dispatcher);
}

void dispatcher_dispatch(Dispatcher* dispatcher, const char* request) {
    if (NULL == dispatcher) return;
    if (0 == strcasecmp("STUDENT", request)) {
        student_view_show(dispatcher->student_view);
    } else {
        home_view_show(dispatcher->home_view);
    }
}
